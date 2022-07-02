#ifndef __CV_PROC__
#define __CV_PROC__

#include "../lib/FileProc.h"
#include "../lib/Elapsed.h"
#include "../lib/dhVector.h"
#include "../lib/dhMat.h"

#include "../lib/ImgMath.h"

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





#include "../lib/MouseProc.h"

class CVProc
{
public:
	CVProc();
	~CVProc();

public:
	void	CamInit();
	void	Run();
	void	Draw(CWnd*);

	CRect	GetRect();
	int		tcnt0;

	CElapsed m_tm;
	float	t_last, dt;

public:
	virtual void AfterRun(int cnt){}
	virtual void BeforeRun(int cnt){}

	
private:
	void	InitValues();
	void	InitRuntime();



public:
	//for cam
	CvvImage	m_CvvImage;
	CvCapture	*capture;		//video capturing structure.
	


	MouseProc	m_touch;

public:
	//for image
	void UpdateTouch();
	void SetImagePath(CString, BOOL bLoad=TRUE);
	CString fname_img;


	IplImage	*img_src;
	CvSize		frame_size;
	IplImage	*img_disp;




};


#endif