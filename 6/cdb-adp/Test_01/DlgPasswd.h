#pragma once


// CDlgPasswd �Ի���

class CDlgPasswd : public CDialog
{
	DECLARE_DYNAMIC(CDlgPasswd)

public:
	CDlgPasswd(CString csAcntNO, CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDlgPasswd();

// �Ի�������
	enum { IDD = IDD_DIALOG_PASSWDSET };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);

private:
	CString m_csAcntNO;
};
