
// mfc_wmp_mp4.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// Cmfc_wmp_mp4App:
// See mfc_wmp_mp4.cpp for the implementation of this class
//

class Cmfc_wmp_mp4App : public CWinApp
{
public:
	Cmfc_wmp_mp4App();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern Cmfc_wmp_mp4App theApp;