// Dialog2Dlg.cpp: 구현 파일
//

#include "stdafx.h"
#include "Report_Dlg1.h"
#include "Dialog2Dlg.h"
#include "afxdialogex.h"


// Dialog2Dlg 대화 상자

IMPLEMENT_DYNAMIC(Dialog2Dlg, CDialogEx)

Dialog2Dlg::Dialog2Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG2, pParent)
{

}

Dialog2Dlg::~Dialog2Dlg()
{
}

void Dialog2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Dialog2Dlg, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_NEXT1, &Dialog2Dlg::OnBnClickedBtnNext1)
END_MESSAGE_MAP()


// Dialog2Dlg 메시지 처리기


void Dialog2Dlg::OnBnClickedBtnNext1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	en_DlgType = DT_Dlg3;

	m_pDlg[en_DlgType] = new Dialog3Dlg;
	m_pDlg[en_DlgType]->Create(IDD_DIALOG3, this);
	m_pDlg[en_DlgType]->SetWindowPos(NULL, 0, 0, rc.Width(), rc.Height(), SWP_SHOWWINDOW);

}
