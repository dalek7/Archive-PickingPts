// PickingPtsView.h : interface of the CPickingPtsView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PICKINGPTSVIEW_H__69A4281D_E73D_470A_8D7D_E6EAA726E911__INCLUDED_)
#define AFX_PICKINGPTSVIEW_H__69A4281D_E73D_470A_8D7D_E6EAA726E911__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "../lib/UI/cmdedit.h"
#include "VWnd.h"

class CPickingPtsView : public CFormView
{
protected: // create from serialization only
	CPickingPtsView();
	DECLARE_DYNCREATE(CPickingPtsView)

public:
	//{{AFX_DATA(CPickingPtsView)
	enum { IDD = IDD_PICKINGPTS_FORM };
	CCMDEdit	m_edit1;
	//}}AFX_DATA

// Attributes
public:
	CPickingPtsDoc* GetDocument();


	CVWnd m_wnd_cv;


// Operations
public:

	void	dbg(int uID, LPCTSTR,...);


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPickingPtsView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPickingPtsView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPickingPtsView)
	afx_msg void OnLoad();
	afx_msg void OnSave();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in PickingPtsView.cpp
inline CPickingPtsDoc* CPickingPtsView::GetDocument()
   { return (CPickingPtsDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PICKINGPTSVIEW_H__69A4281D_E73D_470A_8D7D_E6EAA726E911__INCLUDED_)
