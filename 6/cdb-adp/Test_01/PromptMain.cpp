// PromptMain.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "Test_01.h"
#include "PromptMain.h"


// CPromptMain �Ի���

IMPLEMENT_DYNAMIC(CPromptMain, CDialog)

CPromptMain::CPromptMain(CWnd* pParent /*=NULL*/)
	: CDialog(CPromptMain::IDD, pParent)
{

}

CPromptMain::~CPromptMain()
{
}

void CPromptMain::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CPromptMain, CDialog)
END_MESSAGE_MAP()


// CPromptMain ��Ϣ�������
