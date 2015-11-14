// ImageProcessingDoc.cpp : implementation of the CImageProcessingDoc class
//

#include "stdafx.h"
#include "ImageProcessing.h"

#include "ImageProcessingDoc.h"
#include "ImageProcessingView.h"
#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingDoc

IMPLEMENT_DYNCREATE(CImageProcessingDoc, CDocument)

BEGIN_MESSAGE_MAP(CImageProcessingDoc, CDocument)
	//{{AFX_MSG_MAP(CImageProcessingDoc)
	ON_COMMAND(ID_FILE_OPEN, OnFileOpen)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingDoc construction/destruction

//##ModelId=3E8286D80171
CImageProcessingDoc::CImageProcessingDoc()
{
	// TODO: add one-time construction code here
	

}

//##ModelId=3E8286D801DE
CImageProcessingDoc::~CImageProcessingDoc()
{
}

//##ModelId=3E8286D801CA
BOOL CImageProcessingDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CImageProcessingDoc serialization

//##ModelId=3E8286D801D5
void CImageProcessingDoc::Serialize(CArchive& ar)
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
// CImageProcessingDoc diagnostics

#ifdef _DEBUG
//##ModelId=3E8286D801E0
void CImageProcessingDoc::AssertValid() const
{
	CDocument::AssertValid();
}

//##ModelId=3E8286D801E2
void CImageProcessingDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingDoc commands

//##ModelId=3E8286D801EA
void CImageProcessingDoc::OnFileOpen() 
{
	// TODO: Add your command handler code here
	char szFilter[] = "BMP 파일 (*.bmp)|*.bmp|모든 파일 (*.*)|*.*||";
	
	CFileDialog dlg(TRUE, NULL, NULL, OFN_HIDEREADONLY, szFilter);
	if(dlg.DoModal() == IDOK)
	{
		const CString szFilepath = dlg.GetPathName();
		// szFilepath가 주어졌으니...저걸로 파일을 불러다가 처리하면된다.

		Bmpfile.Open(szFilepath, CFile::modeReadWrite | CFile::typeBinary, NULL);
		// Bmp 파일 겍체 사용. 파일을 연다.
	}
	
	
	m_bitmapSize=Bmpfile.GetLength();	
	p_Buffer = new char(m_bitmapSize+1);
	// 계산된 파일 크기로 메모리 잡는다.

	Bmpfile.ReadHuge((void *)p_Buffer, m_bitmapSize);
	// 메모리에 파일 로딩....차후의 작업은 View 클래스에서 작업한다.

	
}
