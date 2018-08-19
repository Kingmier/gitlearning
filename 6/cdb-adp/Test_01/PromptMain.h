#pragma once


// CPromptMain 对话框

class CPromptMain : public CDialog
{
	DECLARE_DYNAMIC(CPromptMain)

public:
	CPromptMain(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CPromptMain();

// 对话框数据
	enum { IDD = IDD_DIALOG_PROMP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
