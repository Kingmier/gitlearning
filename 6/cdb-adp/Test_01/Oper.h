#pragma once


// COper �Ի���

class COper : public CDialog
{
	DECLARE_DYNAMIC(COper)

public:
	COper(const CString &csAcntNO, CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~COper();

// �Ի�������
	enum { IDD = IDD_DIALOG_BUSINESS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonQryacount();

private:
	CString m_csAcntNO;
};
