// Oper.cpp : 实现文件
//

#include "stdafx.h"
#include "Test_01.h"
#include "Oper.h"
#include "AcntHis.h"


// COper 对话框

IMPLEMENT_DYNAMIC(COper, CDialog)

COper::COper(const CString &csAcntNO, CWnd* pParent /*=NULL*/)
	: CDialog(COper::IDD, pParent),
	m_csAcntNO(csAcntNO)
{

}

COper::~COper()
{
}

void COper::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(COper, CDialog)
	ON_BN_CLICKED(IDC_BUTTON_QRYACOUNT, &COper::OnBnClickedButtonQryacount)
END_MESSAGE_MAP()


// COper 消息处理程序

void COper::OnBnClickedButtonQryacount()
{
	// TODO: 在此添加控件通知处理程序代码
	CAcntHis oAcntHis(m_csAcntNO.Trim());
	oAcntHis.DoModal();
}
