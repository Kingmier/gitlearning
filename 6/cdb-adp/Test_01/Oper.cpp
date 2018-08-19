// Oper.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Test_01.h"
#include "Oper.h"
#include "AcntHis.h"


// COper �Ի���

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


// COper ��Ϣ�������

void COper::OnBnClickedButtonQryacount()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CAcntHis oAcntHis(m_csAcntNO.Trim());
	oAcntHis.DoModal();
}
