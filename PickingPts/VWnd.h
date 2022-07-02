#if !defined(AFX_VWND_H__4D4E6BC0_DEA3_451F_8DBE_B43925F69553__INCLUDED_)
#define AFX_VWND_H__4D4E6BC0_DEA3_451F_8DBE_B43925F69553__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// VWnd.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CVWnd window
#include "CVProc.h"

class CVWnd : public CWnd
{
// Construction
public:
	CVWnd();

// Attributes
public:
	BOOL	bInitCam;
	

	

	CVProc		m_proc;

	
public:
	dhVector *ptHist;
	dhVector *pTouchVector;

// Operations
public:
	enum __cammode {kImage=0, kCam};

	void InitValues();
	void Create(CRect rc, CWnd *pWnd);
	
	void InitCam();
	void ProcCam();

	void LoadFromFile(CString);
	void SaveTouchPoints();

	
// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVWnd)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CVWnd();

	// Generated message map functions
protected:
	//{{AFX_MSG(CVWnd)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnDestroy();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnPaint();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VWND_H__4D4E6BC0_DEA3_451F_8DBE_B43925F69553__INCLUDED_)
