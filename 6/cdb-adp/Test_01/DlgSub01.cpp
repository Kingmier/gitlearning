// DlgSub01.cpp : 实现文件
//

#include "stdafx.h"
#include "Test_01.h"
#include "DlgSub01.h"
#include "dbadp.h"
#include "dlgpasswd.h"


// CDlgSub01 对话框

IMPLEMENT_DYNAMIC(CDlgSub01, CDialog)

CDlgSub01::CDlgSub01(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgSub01::IDD, pParent)
{
}

CDlgSub01::~CDlgSub01()
{
}

void CDlgSub01::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgSub01, CDialog)
	ON_BN_CLICKED(IDOK, &CDlgSub01::OnBnClickedOk)
	ON_EN_CHANGE(IDC_EDIT_USRNAME, &CDlgSub01::OnEnChangeEdit1)
	ON_WM_ACTIVATE()
END_MESSAGE_MAP()


// CDlgSub01 消息处理程序

void CDlgSub01::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CSTM_INFO oCstmInfo;
	GetDlgItemText(IDC_EDIT_USRNAME, oCstmInfo.m_csName);
	GetDlgItemText(IDC_EDIT_USRID, oCstmInfo.m_csID);
	GetDlgItemText(IDC_COMBO_SEX, oCstmInfo.m_csSex);
	GetDlgItemText(IDC_EDIT_MOBILE, oCstmInfo.m_csMobile);
	GetDlgItemText(IDC_EDIT_COMPANY, oCstmInfo.m_csCmpny);

	CSTM_INFO oCstmInfoTmp;
	CDBAdp oDBAdp;
	int iRet = oDBAdp.queryCstmInfoByUsrID(oCstmInfo.m_csID, oCstmInfoTmp);
	if (-2 == iRet)
	{
		(void)oDBAdp.addNewCstmInfo(oCstmInfo);
	}
 
	CDlgPasswd oDlgPasswd(oCstmInfo.m_csID);
	oDlgPasswd.DoModal();

}



void CDlgSub01::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialog::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码

	
}

void CDlgSub01::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
{
	CDialog::OnActivate(nState, pWndOther, bMinimized);

	// TODO: 在此处添加消息处理程序代码
	// Init Sex
	((CComboBox*)GetDlgItem(IDC_COMBO_SEX))->Clear();
	((CComboBox*)GetDlgItem(IDC_COMBO_SEX))->AddString(_T("男"));
	((CComboBox*)GetDlgItem(IDC_COMBO_SEX))->AddString(_T("女"));
}
