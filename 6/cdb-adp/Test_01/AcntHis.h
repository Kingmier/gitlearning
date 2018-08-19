#pragma once
#include "afxcmn.h"


// CAcntHis 对话框

class CAcntHis : public CDialog
{
	DECLARE_DYNAMIC(CAcntHis)

public:
	CAcntHis(const CString &csAcntNO, CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CAcntHis();

// 对话框数据
	enum { IDD = IDD_DIALOG_ACNTHIS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CListCtrl m_lstCtrl;
//	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);


private:
	CString m_csAcntNO;
public:
//	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
};
