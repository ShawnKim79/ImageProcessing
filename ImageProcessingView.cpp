// ImageProcessingView.cpp : implementation of the CImageProcessingView class
//

#include "stdafx.h"
#include "ImageProcessing.h"

#include "ImageProcessingDoc.h"
#include "ImageProcessingView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingView

IMPLEMENT_DYNCREATE(CImageProcessingView, CView)

BEGIN_MESSAGE_MAP(CImageProcessingView, CView)
	//{{AFX_MSG_MAP(CImageProcessingView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingView construction/destruction

//##ModelId=3E8286D80120
CImageProcessingView::CImageProcessingView()
{
	// TODO: add construction code here

}

//##ModelId=3E8286D8014A
CImageProcessingView::~CImageProcessingView()
{
}

//##ModelId=3E8286D8012C
BOOL CImageProcessingView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingView drawing

//##ModelId=3E8286D80122
void CImageProcessingView::OnDraw(CDC* pDC)
{
	CImageProcessingDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here

	// 화면 DC와 호환되는 DC를 만든다.
	CDC BufferDC;
	BufferDC.CreateCompatibleDC(pDC);

	// 화면 DC와 호환성있는 메모리 비트맵 만든다.
	// 그리고...가능하다면 버퍼에 파일도 저장.
	CBitmap bmpbuffer;
	
	
	CSize bitmap_size = bmpbuffer.GetBitmapDimension(); // bmp의 좌우 크기 얻기
	bmpbuffer.CreateCompatibleBitmap(pDC,bitmap_size.cx, bitmap_size.cy);

	// 메모리 DC에 메모리 비트맵을 선택.
		


}

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingView printing

//##ModelId=3E8286D80134
BOOL CImageProcessingView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

//##ModelId=3E8286D80137
void CImageProcessingView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

//##ModelId=3E8286D80141
void CImageProcessingView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingView diagnostics

#ifdef _DEBUG
//##ModelId=3E8286D80152
void CImageProcessingView::AssertValid() const
{
	CView::AssertValid();
}

//##ModelId=3E8286D80154
void CImageProcessingView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

//##ModelId=3E8286D80121
CImageProcessingDoc* CImageProcessingView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImageProcessingDoc)));
	return (CImageProcessingDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingView message handlers
