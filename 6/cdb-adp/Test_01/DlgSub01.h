#pragma once


// CDlgSub01 �Ի���

class CDlgSub01 : public CDialog
{
	DECLARE_DYNAMIC(CDlgSub01)

public:
	CDlgSub01(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgSub01();

// �Ի�������
	enum { IDD = IDD_DIALOG_USR_REG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
};
