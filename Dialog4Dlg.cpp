// Dialog4Dlg.cpp: 구현 파일
//

#include "stdafx.h"
#include "Report_Dlg1.h"
#include "Dialog4Dlg.h"
#include "afxdialogex.h"


// Dialog4Dlg 대화 상자

IMPLEMENT_DYNAMIC(Dialog4Dlg, CDialogEx)

Dialog4Dlg::Dialog4Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG4, pParent)
{

}

Dialog4Dlg::~Dialog4Dlg()
{
}

void Dialog4Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Dialog4Dlg, CDialogEx)
END_MESSAGE_MAP()


// Dialog4Dlg 메시지 처리기
