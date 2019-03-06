// Mainpage.cpp : implementation file
//

#include "stdafx.h"
#include "Stock Trade system.h"
#include "Mainpage.h"
#include "afxdialogex.h"
#include "Function1.h"

// Mainpage dialog

IMPLEMENT_DYNAMIC(Mainpage, CDialogEx)

Mainpage::Mainpage(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_Mainpage, pParent)
{

}
////test

Mainpage::~Mainpage()
{
}

void Mainpage::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Mainpage, CDialogEx)
	ON_BN_CLICKED(IDC_Mainpage_BUTTON_Brokerservice, &Mainpage::OnBnClickedMainpageButtonBrokerservice)
END_MESSAGE_MAP()


// Mainpage message handlers


void Mainpage::OnBnClickedMainpageButtonBrokerservice()
{
	// TODO: Add your control notification handler code here
	Mainpage::OnCancel();
	Function1 dlg;
	dlg.DoModal();
}
