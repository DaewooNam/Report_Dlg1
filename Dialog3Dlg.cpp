// Dialog3Dlg.cpp: 구현 파일
//

#include "stdafx.h"
#include "Report_Dlg1.h"
#include "Dialog3Dlg.h"
#include "afxdialogex.h"


// Dialog3Dlg 대화 상자

IMPLEMENT_DYNAMIC(Dialog3Dlg, CDialogEx)

Dialog3Dlg::Dialog3Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG3, pParent)
{

}

Dialog3Dlg::~Dialog3Dlg()
{
}

void Dialog3Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Dialog3Dlg, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_NEXT2, &Dialog3Dlg::OnBnClickedBtnNext2)
END_MESSAGE_MAP()


// Dialog3Dlg 메시지 처리기


void Dialog3Dlg::OnBnClickedBtnNext2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	en_DlgType = DT_Dlg4;

	m_pDlg[en_DlgType] = new Dialog4Dlg;
	m_pDlg[en_DlgType]->Create(IDD_DIALOG4, this);
	m_pDlg[en_DlgType]->SetWindowPos(NULL, 0, 0, rc.Width(), rc.Height(), SWP_SHOWWINDOW);


}
