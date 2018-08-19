// DlgSub01.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Test_01.h"
#include "DlgSub01.h"
#include "dbadp.h"
#include "dlgpasswd.h"


// CDlgSub01 �Ի���

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


// CDlgSub01 ��Ϣ�������

void CDlgSub01::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialog::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������

	
}

void CDlgSub01::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
{
	CDialog::OnActivate(nState, pWndOther, bMinimized);

	// TODO: �ڴ˴������Ϣ����������
	// Init Sex
	((CComboBox*)GetDlgItem(IDC_COMBO_SEX))->Clear();
	((CComboBox*)GetDlgItem(IDC_COMBO_SEX))->AddString(_T("��"));
	((CComboBox*)GetDlgItem(IDC_COMBO_SEX))->AddString(_T("Ů"));
}
