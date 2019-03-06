// Function1.cpp : implementation file
//test wzy

#include "stdafx.h"
#include "Stock Trade system.h"
#include "Function1.h"
#include "afxdialogex.h"


// Function1 dialog

IMPLEMENT_DYNAMIC(Function1, CDialogEx)

Function1::Function1(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_Function1, pParent)
{

}

Function1::~Function1()
{
}

void Function1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Function1, CDialogEx)
	ON_BN_CLICKED(IDOK, &Function1::OnBnClickedOk)
END_MESSAGE_MAP()


// Function1 message handlers


void Function1::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CDialogEx::OnOK();
}
