#pragma once


// Dialog2Dlg 대화 상자

class Dialog2Dlg : public CDialogEx
{
	DECLARE_DYNAMIC(Dialog2Dlg)

public:
	Dialog2Dlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~Dialog2Dlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnNext1();
};
