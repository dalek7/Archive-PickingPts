// PickingPtsDoc.cpp : implementation of the CPickingPtsDoc class
//

#include "stdafx.h"
#include "PickingPts.h"

#include "PickingPtsDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPickingPtsDoc

IMPLEMENT_DYNCREATE(CPickingPtsDoc, CDocument)

BEGIN_MESSAGE_MAP(CPickingPtsDoc, CDocument)
	//{{AFX_MSG_MAP(CPickingPtsDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPickingPtsDoc construction/destruction

CPickingPtsDoc::CPickingPtsDoc()
{
	// TODO: add one-time construction code here

}

CPickingPtsDoc::~CPickingPtsDoc()
{
}

BOOL CPickingPtsDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CPickingPtsDoc serialization

void CPickingPtsDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CPickingPtsDoc diagnostics

#ifdef _DEBUG
void CPickingPtsDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPickingPtsDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPickingPtsDoc commands
