// AcntHis.cpp : 实现文件
//

#include "stdafx.h"
#include "Test_01.h"
#include "AcntHis.h"
#include "dbadp.h"


// CAcntHis 对话框

IMPLEMENT_DYNAMIC(CAcntHis, CDialog)

CAcntHis::CAcntHis(const CString &csAcntNO, CWnd* pParent /*=NULL*/)
	: CDialog(CAcntHis::IDD, pParent),
	m_csAcntNO(csAcntNO)
{

}

CAcntHis::~CAcntHis()
{
}

void CAcntHis::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST_ACNTHIS, m_lstCtrl);
}


BEGIN_MESSAGE_MAP(CAcntHis, CDialog)
	ON_BN_CLICKED(IDOK, &CAcntHis::OnBnClickedOk)
//	ON_WM_ACTIVATE()
//	ON_WM_CREATE()
END_MESSAGE_MAP()


// CAcntHis 消息处理程序

void CAcntHis::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	// 这里只做演示，真正的用户操作数据应该从“账户操作历史”表中查询
	ACOUNT_INFO oAcntInfo;
	oAcntInfo.m_csAcntNO = m_csAcntNO;
	CDBAdp oDBAdp;
	int iRet = oDBAdp.queryAcountInfoByAcntNO(oAcntInfo);
	if (0 == iRet)
	{
		m_lstCtrl.DeleteAllItems();
		m_lstCtrl.InsertItem(0, _T(""));
		m_lstCtrl.SetItemText(0, 0, oAcntInfo.m_csAcntNO.Trim());
		m_lstCtrl.SetItemText(0, 1, _T("100"));
		m_lstCtrl.SetItemText(0, 2, _T("2017-7-2"));
		m_lstCtrl.SetRedraw(TRUE);
	}
	//OnOK();
}

//void CAcntHis::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
//{
//	CDialog::OnActivate(nState, pWndOther, bMinimized);
//
//	// TODO: 在此处添加消息处理程序代码
//
//	
//}

BOOL CAcntHis::OnInitDialog()
{
	CDialog::OnInitDialog();
	//TODO:  在此添加您专用的创建代码
	
	// 创建表头
	//m_lstCtrl.InsertColumn(0, _T("账号"), LVCFMT_CENTER, 1400, 50);
	
	m_lstCtrl.DeleteAllItems();
	m_lstCtrl.InsertColumn(0, _T("账号"));
	m_lstCtrl.SetColumnWidth(0, 200);
	
	m_lstCtrl.InsertColumn(1, _T("金额"));
	m_lstCtrl.SetColumnWidth(1, 40);
	
	m_lstCtrl.InsertColumn(2, _T("成交时间"));
	m_lstCtrl.SetColumnWidth(2, 100);
	
	m_lstCtrl.SetRedraw(TRUE);

	return TRUE;
}
