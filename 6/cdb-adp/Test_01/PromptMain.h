#pragma once


// CPromptMain �Ի���

class CPromptMain : public CDialog
{
	DECLARE_DYNAMIC(CPromptMain)

public:
	CPromptMain(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CPromptMain();

// �Ի�������
	enum { IDD = IDD_DIALOG_PROMP };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
