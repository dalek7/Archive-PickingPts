// PickingPts.h : main header file for the PICKINGPTS application
//

#if !defined(AFX_PICKINGPTS_H__70BA174B_73E5_48EF_AD11_8268B6219161__INCLUDED_)
#define AFX_PICKINGPTS_H__70BA174B_73E5_48EF_AD11_8268B6219161__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CPickingPtsApp:
// See PickingPts.cpp for the implementation of this class
//

class CPickingPtsApp : public CWinApp
{
public:
	CPickingPtsApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPickingPtsApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CPickingPtsApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PICKINGPTS_H__70BA174B_73E5_48EF_AD11_8268B6219161__INCLUDED_)
