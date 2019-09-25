
// hcn.h : main header file for the hcn application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// ChcnApp:
// See hcn.cpp for the implementation of this class
//

class ChcnApp : public CWinApp
{
public:
	ChcnApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern ChcnApp theApp;
