// ImageProcessing.h : main header file for the IMAGEPROCESSING application
//

#if !defined(AFX_IMAGEPROCESSING_H__8BF80DA3_CB92_44D3_AE57_5EEC136C7F95__INCLUDED_)
#define AFX_IMAGEPROCESSING_H__8BF80DA3_CB92_44D3_AE57_5EEC136C7F95__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CImageProcessingApp:
// See ImageProcessing.cpp for the implementation of this class
//

//##ModelId=3E8286D801FC
class CImageProcessingApp : public CWinApp
{
public:
	//##ModelId=3E8286D801FE
	CImageProcessingApp();

// Variable
	//##ModelId=3E8286D80206
	int m_nNewDoc; // 메뉴를 위한 변수 : 새 파일



// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CImageProcessingApp)
	public:
	//##ModelId=3E8286D80207
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CImageProcessingApp)
	//##ModelId=3E8286D80211
	afx_msg void OnAppAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMAGEPROCESSING_H__8BF80DA3_CB92_44D3_AE57_5EEC136C7F95__INCLUDED_)
