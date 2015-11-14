// ImageProcessingDoc.h : interface of the CImageProcessingDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_IMAGEPROCESSINGDOC_H__5BED7CDD_626A_4739_91C9_05EADBD2359C__INCLUDED_)
#define AFX_IMAGEPROCESSINGDOC_H__5BED7CDD_626A_4739_91C9_05EADBD2359C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <afxwin.h>


//##ModelId=3E8286D80166
class CImageProcessingDoc : public CDocument
{
protected: // create from serialization only
	//##ModelId=3E8286D80171
	CImageProcessingDoc();
	DECLARE_DYNCREATE(CImageProcessingDoc)

// Attributes
public:
	//##ModelId=3E8286D8017B
	CFile Bmpfile;	// bmp 파일 위한 객체.
	//##ModelId=3E8286D80185
	CBitmap bitmap; // bmp 객체.

	//##ModelId=3E8286D8018E
	DWORD m_bitmapSize; // 파일 사이즈
	//##ModelId=3E8286D801C0
	char *p_Buffer;		// bmp파일 저장을 위한 메모리 버퍼.
	
	

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImageProcessingDoc)
	public:
	//##ModelId=3E8286D801CA
	virtual BOOL OnNewDocument();
	//##ModelId=3E8286D801D5
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	//##ModelId=3E8286D801DE
	virtual ~CImageProcessingDoc();
#ifdef _DEBUG
	//##ModelId=3E8286D801E0
	virtual void AssertValid() const;
	//##ModelId=3E8286D801E2
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CImageProcessingDoc)
	//##ModelId=3E8286D801EA
	afx_msg void OnFileOpen();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMAGEPROCESSINGDOC_H__5BED7CDD_626A_4739_91C9_05EADBD2359C__INCLUDED_)
