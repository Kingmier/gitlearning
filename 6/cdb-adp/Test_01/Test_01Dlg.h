
// Test_01Dlg.h : ͷ�ļ�
//

#pragma once


// CTest_01Dlg �Ի���
class CTest_01Dlg : public CDialog
{
// ����
public:
	CTest_01Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_TEST_01_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnKillfocusEditMainFileName();

public:
	bool chekFileNameValid(const CString &strFileName);
	afx_msg void OnBnClickedButtonReg();
	afx_msg void OnBnClickedButtonLogin();
};
