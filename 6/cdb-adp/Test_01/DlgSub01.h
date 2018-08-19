#pragma once


// CDlgSub01 对话框

class CDlgSub01 : public CDialog
{
	DECLARE_DYNAMIC(CDlgSub01)

public:
	CDlgSub01(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgSub01();

// 对话框数据
	enum { IDD = IDD_DIALOG_USR_REG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
};
