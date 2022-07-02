#include "stdafx.h"
#include "CVProc.h"


#define draw_cross( img, center, color, d,t )                                 \
                cvLine( img, cvPoint( center.x - d, center.y - d ),                \
                             cvPoint( center.x + d, center.y + d ), color, t, 0 ); \
                cvLine( img, cvPoint( center.x + d, center.y - d ),                \
                             cvPoint( center.x - d, center.y + d ), color, t, 0 )



#define draw_cross2( img, center,  d,t )                                 \
                cvLine( img, cvPoint( center.x - d, center.y - d ),                \
                             cvPoint( center.x + d, center.y + d ), CV_RGB(0,255,255), t, 0 ); \
                cvLine( img, cvPoint( center.x + d, center.y - d ),                \
                             cvPoint( center.x - d, center.y + d ), CV_RGB(0,255,255), t, 0 )



CVProc::CVProc()
{
	InitValues();

}

CVProc::~CVProc()
{
	if(NULL != capture) cvReleaseCapture(&capture);

	if(img_disp) cvReleaseImage(&img_disp);
	if(img_src) cvReleaseImage(&img_src);


	cvDestroyAllWindows();

	Dbg("CVProc::~CVProc()");
	//if(img_src) cvReleaseImage(&img_src);
}

void CVProc::InitValues()
{
	capture		= NULL;
	img_src		= NULL;
	img_disp	= NULL;
	tcnt0		= 0;
	t_last		= 0;
	dt			= 0;
	fname_img	= "";
}


void CVProc::InitRuntime()
{

	;
}

void CVProc::Run()
{
	
	float t_now = m_tm.End();
	dt =  t_now - t_last;
	dt = t_last>0 ? dt : 0;
	t_last = t_now;

	BeforeRun(tcnt0);

	// Main 
	{
		cvGrabFrame(capture);
		img_src = cvQueryFrame( capture );
		//m_CvvImage.CopyOf(img_src);
	}

	AfterRun(tcnt0);
	
	tcnt0++;
}

CRect CVProc::GetRect()
{
	return CRect(0,0,frame_size.width, frame_size.height);
}


void CVProc::UpdateTouch()
{

	int sz = img_src->width * img_src->height * img_src->nChannels;
	memmove(img_disp->imageData, img_src->imageData, sz);


	for(int i=0; i<m_touch.traj_pick.GetSize(); i++)
	{


		
		draw_cross2( img_disp, m_touch.traj_pick.GetAt(i).pt,  10,1 );    
		
	

	}


	m_CvvImage.CopyOf(img_disp);

}


void CVProc::CamInit()
{
	capture = cvCaptureFromCAM(0);

	
	frame_size.width	= 640;//(int) cvGetCaptureProperty( capture, CV_CAP_PROP_FRAME_WIDTH );
	frame_size.height	= 480;//(int) cvGetCaptureProperty( capture, CV_CAP_PROP_FRAME_HEIGHT );
	img_src				= cvCreateImage( frame_size, IPL_DEPTH_8U, 3 );
	img_disp			= cvCreateImage( frame_size, IPL_DEPTH_8U, 3);
}



void CVProc::SetImagePath(CString fn_, BOOL bLoad)
{

	fname_img = fn_;

	if(bLoad)
	{
		img_src = cvLoadImage(fname_img);
		if(img_disp) cvReleaseImage(&img_disp);
		img_disp			= cvCreateImage( cvSize(img_src->width, img_src->height), IPL_DEPTH_8U, 3);

		int sz = img_src->width * img_src->height * img_src->nChannels;
		memmove(img_disp->imageData, img_src->imageData, sz);

		m_CvvImage.CopyOf(img_disp);
		Dbg("Loaded %dx%dx%d", img_src->width, img_src->height, img_src->nChannels);
		


	}

}