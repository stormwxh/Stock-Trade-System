#pragma once


// Mainpage dialog

class Mainpage : public CDialogEx
{
	DECLARE_DYNAMIC(Mainpage)

public:
	Mainpage(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Mainpage();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_Mainpage };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedMainpageButtonBrokerservice();
};
