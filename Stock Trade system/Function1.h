#pragma once


// Function1 dialog
//Test FUnction1
class Function1 : public CDialogEx
{
	DECLARE_DYNAMIC(Function1)

public:
	Function1(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Function1();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_Function1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
