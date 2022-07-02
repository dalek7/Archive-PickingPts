// VWnd.cpp : implementation file
//

#include "stdafx.h"
#include "VWnd.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVWnd

CVWnd::CVWnd()
{
	InitValues();
}

CVWnd::~CVWnd()
{
}

void CVWnd::InitValues()
{
	bInitCam	= FALSE;
	
}

void CVWnd::Create(CRect rc, CWnd *pWnd)
{
	CWnd::Create( NULL,"",WS_CHILD|WS_VISIBLE,rc,pWnd,0);//|WS_VISIBLE|WS_BORDER

}


BEGIN_MESSAGE_MAP(CVWnd, CWnd)
	//{{AFX_MSG_MAP(CVWnd)
	ON_WM_CREATE()
	ON_WM_DESTROY()
	ON_WM_TIMER()
	ON_WM_PAINT()
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()



void CVWnd::InitCam()
{
	bInitCam = TRUE;
	

}


void CVWnd::ProcCam()
{


	Invalidate();

}


/////////////////////////////////////////////////////////////////////////////
// CVWnd message handlers

int CVWnd::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	
	
	m_proc.m_touch.Create(this);
	ptHist				= m_proc.m_touch.GetHistoryPt();
	pTouchVector		= &m_proc.m_touch.touchVector;

	SetTimer(1,10,NULL);
	
	
	return 0;
}

void CVWnd::OnDestroy() 
{
	CWnd::OnDestroy();
	
	Dbg("CVWnd::OnDestroy()");
	KillTimer(1);
	
}

void CVWnd::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	
	if(nIDEvent==1)
	{
		
		if(bInitCam)
		{
			ProcCam();
		}
	}

	CWnd::OnTimer(nIDEvent);
}



void CVWnd::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	CRect viewSize = m_proc.GetRect();

	CRect rc;
	this->GetWindowRect(rc);

	int h_rc = rc.bottom - rc.top;
	int w_rc = rc.right - rc.left;

	if(m_proc.img_disp)
	m_proc.m_CvvImage.DrawToHDC( dc.GetSafeHdc() ,CRect(0,0,w_rc,h_rc));

}

int nLoaded = -1;
void CVWnd::LoadFromFile(CString fn_)
{

	m_proc.SetImagePath(fn_);

	nLoaded++;
	Invalidate();
}
/*
typedef struct __Picking
{
	CPoint pt;
	int param1;
	int param2;

} Picking;
*/

void CVWnd::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	

	Picking pick1;

	pick1.pt		= point;
	pick1.param1	= nLoaded;
	pick1.param2	= m_proc.m_touch.pickCount++;

	m_proc.m_touch.PickingAdd(pick1);

	if(m_proc.m_touch.pickCount==4)
	{
		m_proc.m_touch.pickCount=0;	


	}

	m_proc.UpdateTouch();
	Invalidate();

	CWnd::OnLButtonDown(nFlags, point);
}


void CVWnd::SaveTouchPoints()
{
	
	m_proc.m_touch.PickingSave();
}