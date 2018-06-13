
// mfc_wmp_mp4Dlg.h : header file
//

#pragma once


// Cmfc_wmp_mp4Dlg dialog
class Cmfc_wmp_mp4Dlg : public CDialogEx
{
// Construction
public:
	Cmfc_wmp_mp4Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_MFC_WMP_MP4_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
