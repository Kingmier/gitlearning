#pragma once


// COper 对话框

class COper : public CDialog
{
	DECLARE_DYNAMIC(COper)

public:
	COper(const CString &csAcntNO, CWnd* pParent = NULL);   // 标准构造函数
	virtual ~COper();

// 对话框数据
	enum { IDD = IDD_DIALOG_BUSINESS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonQryacount();

private:
	CString m_csAcntNO;
};
