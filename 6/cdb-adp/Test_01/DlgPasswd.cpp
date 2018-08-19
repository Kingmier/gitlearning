// DlgPasswd.cpp : 实现文件
//

#include "stdafx.h"
#include "Test_01.h"
#include "DlgPasswd.h"
#include "utils.h"
#include "DBAdp.h"


// CDlgPasswd 对话框

IMPLEMENT_DYNAMIC(CDlgPasswd, CDialog)

CDlgPasswd::CDlgPasswd(CString csAcntNO, CWnd* pParent /*=NULL*/)
	: CDialog(CDlgPasswd::IDD, pParent),
	m_csAcntNO(csAcntNO)
{

}

CDlgPasswd::~CDlgPasswd()
{
}

void CDlgPasswd::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgPasswd, CDialog)
	ON_BN_CLICKED(IDOK, &CDlgPasswd::OnBnClickedOk)
	ON_WM_ACTIVATE()
END_MESSAGE_MAP()


// CDlgPasswd 消息处理程序

void CDlgPasswd::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码
	CString csPasswd(""), csPasswdCfm("");
	GetDlgItemText(IDC_EDIT_PASSWD, csPasswd);
	GetDlgItemText(IDC_EDIT_PASSWD_CFM, csPasswdCfm);

	if (csPasswd.IsEmpty() || csPasswdCfm.IsEmpty())
	{
		AfxMessageBox(_T("密码不能为空！"));
	}
	else if (csPasswd != csPasswdCfm)
	{
		AfxMessageBox(_T("两次输入的密码不同，请重新输入"));
	}
	else
	{
		ACOUNT_INFO oAcountInfo;
		GetDlgItemText(IDC_EDIT_ACNT_NEW, oAcountInfo.m_csAcntNO);
		oAcountInfo.m_csUsrID = m_csAcntNO;
		oAcountInfo.m_csBalance = _T("0");
		oAcountInfo.m_csPasswd = csPasswd;
		CDBAdp oDBAdp;
		int iRet = oDBAdp.addNewAcount(oAcountInfo);
		if (0 != iRet)
		{
			AfxMessageBox(_T("用户密码创建失败！"));
		}
		else
		{
			OnOK();
		}
	}
}

void CDlgPasswd::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
{
	CDialog::OnActivate(nState, pWndOther, bMinimized);

	// TODO: 在此处添加消息处理程序代码
	
	CString csAcountNO(_T("518718"));
	csAcountNO += CUtils::getCrntDateTime();
	SetDlgItemText(IDC_EDIT_ACNT_NEW, csAcountNO);
}
