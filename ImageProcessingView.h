// ImageProcessingView.h : interface of the CImageProcessingView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_IMAGEPROCESSINGVIEW_H__5FFDDC90_6AE9_4E27_BF5C_AE33F08EE8A0__INCLUDED_)
#define AFX_IMAGEPROCESSINGVIEW_H__5FFDDC90_6AE9_4E27_BF5C_AE33F08EE8A0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


//##ModelId=3E8286D80116
class CImageProcessingView : public CView
{
protected: // create from serialization only
	//##ModelId=3E8286D80120
	CImageProcessingView();
	DECLARE_DYNCREATE(CImageProcessingView)

// Attributes
public:
	//##ModelId=3E8286D80121
	CImageProcessingDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImageProcessingView)
	public:
	//##ModelId=3E8286D80122
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	//##ModelId=3E8286D8012C
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//##ModelId=3E8286D80134
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	//##ModelId=3E8286D80137
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	//##ModelId=3E8286D80141
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	//##ModelId=3E8286D8014A
	virtual ~CImageProcessingView();
#ifdef _DEBUG
	//##ModelId=3E8286D80152
	virtual void AssertValid() const;
	//##ModelId=3E8286D80154
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CImageProcessingView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ImageProcessingView.cpp
inline CImageProcessingDoc* CImageProcessingView::GetDocument()
   { return (CImageProcessingDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMAGEPROCESSINGVIEW_H__5FFDDC90_6AE9_4E27_BF5C_AE33F08EE8A0__INCLUDED_)
