// MainFrm.h : interface of the CMainFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAINFRM_H__86B636D5_D7E2_4A6E_9578_484725C53D95__INCLUDED_)
#define AFX_MAINFRM_H__86B636D5_D7E2_4A6E_9578_484725C53D95__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//##ModelId=3E8286D800B2
class CMainFrame : public CFrameWnd
{
	
protected: // create from serialization only
	//##ModelId=3E8286D800B4
	CMainFrame();
	DECLARE_DYNCREATE(CMainFrame)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMainFrame)
	//##ModelId=3E8286D800BC
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
public:
	//##ModelId=3E8286D800BF
	virtual ~CMainFrame();
#ifdef _DEBUG
	//##ModelId=3E8286D800C6
	virtual void AssertValid() const;
	//##ModelId=3E8286D800C8
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:  // control bar embedded members
	//##ModelId=3E8286D800DB
	CStatusBar  m_wndStatusBar;
	//##ModelId=3E8286D800EF
	CToolBar    m_wndToolBar;

// Generated message map functions
protected:
	//{{AFX_MSG(CMainFrame)
	//##ModelId=3E8286D800F8
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAINFRM_H__86B636D5_D7E2_4A6E_9578_484725C53D95__INCLUDED_)
