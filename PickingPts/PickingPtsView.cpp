// PickingPtsView.cpp : implementation of the CPickingPtsView class
//

#include "stdafx.h"
#include "PickingPts.h"

#include "PickingPtsDoc.h"
#include "PickingPtsView.h"

CPickingPtsView *pv;
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPickingPtsView

IMPLEMENT_DYNCREATE(CPickingPtsView, CFormView)

BEGIN_MESSAGE_MAP(CPickingPtsView, CFormView)
	//{{AFX_MSG_MAP(CPickingPtsView)
	ON_BN_CLICKED(IDC_BUTTON1, OnLoad)
	ON_BN_CLICKED(IDC_BUTTON2, OnSave)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CFormView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPickingPtsView construction/destruction

CPickingPtsView::CPickingPtsView()
	: CFormView(CPickingPtsView::IDD)
{
	//{{AFX_DATA_INIT(CPickingPtsView)
	//}}AFX_DATA_INIT
	// TODO: add construction code here

	pv = NULL;

}

CPickingPtsView::~CPickingPtsView()
{
}

void CPickingPtsView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CPickingPtsView)
	DDX_Control(pDX, IDC_EDIT1, m_edit1);
	//}}AFX_DATA_MAP
}

BOOL CPickingPtsView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CPickingPtsView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

	pv = this;
	m_wnd_cv.Create(CRect(0,0,640,427), this);

}



void CPickingPtsView::dbg(int uID, LPCTSTR lpFmt,...)
{
	va_list	marker;
	va_start( marker,lpFmt );
	char text[1000]={0,};
	
	vsprintf( text,lpFmt,marker);
	va_end( marker );

	CString ret(text);

	if(uID==0)
	{
		if(ret.Compare("")==0)	m_edit1.Reset();
		else					m_edit1.PutLine(ret);
	}
	
}
/////////////////////////////////////////////////////////////////////////////
// CPickingPtsView printing

BOOL CPickingPtsView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CPickingPtsView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CPickingPtsView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CPickingPtsView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: add customized printing code here
}

/////////////////////////////////////////////////////////////////////////////
// CPickingPtsView diagnostics

#ifdef _DEBUG
void CPickingPtsView::AssertValid() const
{
	CFormView::AssertValid();
}

void CPickingPtsView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CPickingPtsDoc* CPickingPtsView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPickingPtsDoc)));
	return (CPickingPtsDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPickingPtsView message handlers


void CPickingPtsView::OnLoad() 
{
	
	char szFilter[] = "Supported Image File|*.jpeg; *.jpg; *.jpe; *.png; *.bmp; *.dib; *.sr; *.ras; *.tiff; *.tif |\
	Portable Network Graphics file(*.png) | *.png |\
	JPEG file(*.jpeg, *.jpg, *.jpe) | *.jpeg; *.jpg; *.jpe |\
	Windows bitmap files(*.bmp, *.dib) | *.bmp; *.dib |\
	Sun rasters(*.sr, *.ras) | *.sr; *.ras |\
	TIFF files(*.tiff, *.tif) | *.tiff; *.tif ||";

	CFileDialog dlg(	TRUE, 
						NULL, 
						NULL, 
						OFN_EXPLORER|OFN_HIDEREADONLY, 
						szFilter
					);
	if( dlg.DoModal() == IDOK ) 
	{

		//m_cv.ResetSpaces();
		CString fname = dlg.GetPathName();
		m_wnd_cv.LoadFromFile(fname);
		

	}

}

void CPickingPtsView::OnSave() 
{

	m_wnd_cv.SaveTouchPoints();
}
