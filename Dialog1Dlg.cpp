// Dialog1Dlg.cpp: 구현 파일
//

#include "stdafx.h"
#include "Report_Dlg1.h"
#include "Dialog1Dlg.h"
#include "afxdialogex.h"


// Dialog1Dlg 대화 상자

IMPLEMENT_DYNAMIC(Dialog1Dlg, CDialogEx)

Dialog1Dlg::Dialog1Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

Dialog1Dlg::~Dialog1Dlg()
{
}

void Dialog1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Dialog1Dlg, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_LOGIN, &Dialog1Dlg::OnBnClickedBtnLogin)
END_MESSAGE_MAP()


// Dialog1Dlg 메시지 처리기


void Dialog1Dlg::OnBnClickedBtnLogin()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	en_DlgType = DT_Dlg2;

	m_pDlg[en_DlgType] = new Dialog2Dlg;
	m_pDlg[en_DlgType]->Create(IDD_DIALOG2, this);
	m_pDlg[en_DlgType]->SetWindowPos(NULL, 0, 0, rc.Width(), rc.Height(), SWP_SHOWWINDOW);

}
