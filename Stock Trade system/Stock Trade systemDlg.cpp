
// Stock Trade systemDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Stock Trade system.h"
#include "Stock Trade systemDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CStockTradesystemDlg dialog



CStockTradesystemDlg::CStockTradesystemDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_STOCKTRADESYSTEM_DIALOG, pParent)
	, m_user(_T(""))
	, m_password(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CStockTradesystemDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_Login_EDIT_Usernam, m_user);
	DDX_Text(pDX, IDC_Login_EDIT_Password, m_password);
}

BEGIN_MESSAGE_MAP(CStockTradesystemDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_STN_CLICKED(IDC_Login_Title, &CStockTradesystemDlg::OnStnClickedLoginTitle)
	ON_EN_CHANGE(IDC_Login_EDIT_Usernam, &CStockTradesystemDlg::OnEnChangeLoginEditUsernam)
	ON_BN_CLICKED(IDOK, &CStockTradesystemDlg::OnBnClickedOk)
	ON_EN_CHANGE(IDC_Login_EDIT_Usernam, &CStockTradesystemDlg::OnEnChangeLoginEditUsernam)
	ON_BN_CLICKED(IDCANCEL, &CStockTradesystemDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// CStockTradesystemDlg message handlers

BOOL CStockTradesystemDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.


	// 将“关于...”菜单项添加到系统菜单中。

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CStockTradesystemDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CStockTradesystemDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CStockTradesystemDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CStockTradesystemDlg::OnStnClickedLoginTitle()
{
	// TODO: Add your control notification handler code here
}


void CStockTradesystemDlg::OnEnChangeLoginEditUsernam()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void CStockTradesystemDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
		// TODO: 在此添加控件通知处理程序代码
		// TODO: Add extra validation here
	this->UpdateData(true);
	CWnd *pWnd = NULL;
	// 验证用户名、密码是否正确
	if (this->m_user != "test")
	{
		MessageBox(_T("用户名错误，请重新输入！"));
		m_user = "";
		pWnd = GetDlgItem(IDC_Login_EDIT_Usernam); // 获取IDC_USER的控件指针
		pWnd->SetFocus(); // 设置焦点
		UpdateData(false);
	}
	else if (this->m_password != "123")
	{
		MessageBox(_T("密码错误，请重新输入！"));
		m_password = "";
		pWnd = GetDlgItem(IDC_Login_EDIT_Password);
		pWnd->SetFocus();
		UpdateData(false);
	}
	else
	{

		CDialogEx::OnOK();
	}
}


void CStockTradesystemDlg::OnEnChangeLoginEditUsername()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
}


void CStockTradesystemDlg::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	AfxGetMainWnd()->PostMessage(WM_QUIT); // 发送WM_QUIT消息退出程序
	CDialogEx::OnCancel();
}
