#pragma once
#include "afxcmn.h"


// CAcntHis �Ի���

class CAcntHis : public CDialog
{
	DECLARE_DYNAMIC(CAcntHis)

public:
	CAcntHis(const CString &csAcntNO, CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CAcntHis();

// �Ի�������
	enum { IDD = IDD_DIALOG_ACNTHIS };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
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
