// PickingPtsDoc.h : interface of the CPickingPtsDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PICKINGPTSDOC_H__9ABC0B6B_CA2F_406D_8AE9_C9E9C12899FF__INCLUDED_)
#define AFX_PICKINGPTSDOC_H__9ABC0B6B_CA2F_406D_8AE9_C9E9C12899FF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CPickingPtsDoc : public CDocument
{
protected: // create from serialization only
	CPickingPtsDoc();
	DECLARE_DYNCREATE(CPickingPtsDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPickingPtsDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPickingPtsDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPickingPtsDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PICKINGPTSDOC_H__9ABC0B6B_CA2F_406D_8AE9_C9E9C12899FF__INCLUDED_)
