
// Test_01Dlg.h : 头文件
//

#pragma once


// CTest_01Dlg 对话框
class CTest_01Dlg : public CDialog
{
// 构造
public:
	CTest_01Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_TEST_01_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
