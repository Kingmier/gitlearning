#pragma once


// CDlgPasswd 对话框

class CDlgPasswd : public CDialog
{
	DECLARE_DYNAMIC(CDlgPasswd)

public:
	CDlgPasswd(CString csAcntNO, CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDlgPasswd();

// 对话框数据
	enum { IDD = IDD_DIALOG_PASSWDSET };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);

private:
	CString m_csAcntNO;
};
