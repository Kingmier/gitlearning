#include "StdAfx.h"
#include "DBAdp.h"
#include <oledberr.h>

CDBAdp::CDBAdp(void)
{
	(void)onInit();
}

CDBAdp::~CDBAdp(void)
{
}

int CDBAdp::onInit()
{
	CoInitialize(NULL);
	HRESULT hRslt = m_pConPtr.CreateInstance(__uuidof(Connection));
	if (!SUCCEEDED(hRslt))
	{
		return -1;
	}

	hRslt = m_pRcrdSet.CreateInstance(_T("ADODB.Recordset"));
	if (!SUCCEEDED(hRslt))
	{
		return -1;
	}

	//m_csConnection = "driver={SQL Server};Server=.\\SQLEXPRESS;DATABASE=bank;UID=ATMAdmin;PWD=Changeme_123;";
	m_csConnection = ("driver={SQL Server};Server=10.60.51.45;DATABASE=bank;UID=ATMAdmin;PWD=Changeme_123;");

	return 0;
}

int CDBAdp::insert(const CString &csTblName, const CString &csParLst, const CString &csData)
{
	HRESULT hRslt = m_pConPtr->Open(_bstr_t(m_csConnection), "", "", adModeUnknown);
	if (DB_SEC_E_AUTH_FAILED == hRslt)
	{
		AfxMessageBox(_T("后台数据库链接认证失败！"));
		return -1;
	}
	else if (S_OK != hRslt)
	{
		return -1;
	}

	CString csSQL("insert into ");
	csSQL += csTblName;
	csSQL += " ( ";
	csSQL += csParLst;
	csSQL += " ) values ( ";
	csSQL += csData;
	csSQL += ")";
	_variant_t oRecord;
	_bstr_t strSQL(csSQL);
	try
	{
		(void)m_pConPtr->Execute(strSQL, &oRecord, adCmdText);
	}
	catch (_com_error e)
	{
		_bstr_t bsSource(e.Source());
		_bstr_t bsDescription(e.Description());
	}
	

	m_pConPtr->Close();
	m_pConPtr.Release();

	return 0;
}

int CDBAdp::select(const CString &csTblName, const CString &csCnd)
{
	CString csSQL("select * from ");
	csSQL += csTblName;
	if (!csCnd.IsEmpty())
	{
		csSQL += " where ";
		csSQL += csCnd;
	}
	_variant_t varOpen(m_csConnection.GetString());
	_variant_t varSQL(csSQL);

	HRESULT hRslt = m_pRcrdSet->Open(varSQL, varOpen, adOpenStatic, adLockOptimistic, adCmdText);
	if (FAILED(hRslt))
	{
		return -1;
	}
	else if (m_pRcrdSet->GetadoEOF())
	{
		return -2;
	}

	while (!m_pRcrdSet->GetadoEOF())
	{
		_variant_t varAcntNO = m_pRcrdSet->GetCollect("acountNO");
		_variant_t varID = m_pRcrdSet->GetCollect("userid");
		_variant_t varBlnc = m_pRcrdSet->GetCollect("balance");
	}

	m_pRcrdSet->Close();
	m_pRcrdSet.Release();

	return 0;
}

int CDBAdp::update(const CString &csTblName, const CString &csData, const CString &csCnd)
{
	CString csSQL("update ");

	csSQL += csTblName;
	csSQL += "Table_Acount set ";
	csSQL += csData;
	if (!csCnd.IsEmpty())
	{
		csSQL += " where ";
		csSQL += csCnd;
	}

	HRESULT hRslt = m_pConPtr->Open(_bstr_t(m_csConnection), "", "", adModeUnknown);
	if (S_OK != hRslt)
	{
		return -1;
	}

	_variant_t oRcrd;
	hRslt = m_pConPtr->Execute(_bstr_t(csSQL), &oRcrd, adCmdText);
	if (S_OK != hRslt)
	{
		return -1;
	}

	return 0;
}










int CDBAdp::addNewAcount(const ACOUNT_INFO &oAcntInfo)
{
	CString csParams("");
	csParams += "acountNO, userid, balance, passwd";

	CString csData("\'");
	csData += oAcntInfo.m_csAcntNO;
	csData += "\', \'";
	csData += oAcntInfo.m_csUsrID;
	csData += "\', ";
	csData += oAcntInfo.m_csBalance;
	csData += ", ";
	csData += oAcntInfo.m_csPasswd;

	return insert(CString("Table_Acount"), csParams, csData);
}

int CDBAdp::addNewCstmInfo(const CSTM_INFO &oCstomInfo)
{
	CString csParams("");
	csParams = "ID, name, sex, mobile, company";

	CString csData("");
	csData += "\'";
	csData += oCstomInfo.m_csID;
	csData += "\', \'";
	csData += oCstomInfo.m_csName;
	csData += "\', \'";
	csData += oCstomInfo.m_csSex;
	csData += "\', \'";
	csData += oCstomInfo.m_csMobile;
	csData += "\', \'";
	csData += oCstomInfo.m_csCmpny;
	csData += "\'";

	return insert(CString("Table_Cstom"), csParams, csData);
}

int CDBAdp::queryCstmInfoByUsrID(const CString &csUsrID, CSTM_INFO &oCstomInfo)
{
	if (csUsrID.IsEmpty())
	{
		return -1;
	}

	CString csCnd("ID = \'");
	csCnd += oCstomInfo.m_csID;
	csCnd += "\'";

	return select(_T("Table_Cstom"), csCnd);
}

int CDBAdp::queryAcountInfoByAcntNO(ACOUNT_INFO &oAcntInfo)
{
	if (oAcntInfo.m_csAcntNO.IsEmpty())
	{
		return -1;
	}

	CString csCnd("");
	csCnd += "acountNO = \'";
	csCnd += oAcntInfo.m_csAcntNO;
	csCnd += "\'";

	CString csSQL("select * from Table_Acount");
	csSQL += " where ";
	csSQL += "acountNO = \'";
	csSQL += oAcntInfo.m_csAcntNO;
	csSQL += "\'";

	_variant_t varOpen(m_csConnection);
	_variant_t varSQL(csSQL);

	HRESULT hRslt = m_pRcrdSet->Open(varSQL, varOpen, adOpenStatic, adLockOptimistic, adCmdText);
	if (FAILED(hRslt))
	{
		return -1;
	}
	else if (m_pRcrdSet->GetadoEOF())
	{
		return -2;
	}

	_variant_t varAcntNO = m_pRcrdSet->GetCollect("acountNO");
	_variant_t varID = m_pRcrdSet->GetCollect("userid");
	_variant_t varBlnc = m_pRcrdSet->GetCollect("balance");
	_variant_t varPasswd = m_pRcrdSet->GetCollect("passwd");

	oAcntInfo.m_csAcntNO = (char*)_bstr_t(varAcntNO);
	oAcntInfo.m_csPasswd = (char*)_bstr_t(varPasswd);
	oAcntInfo.m_csBalance = (char*)_bstr_t(varBlnc);
	oAcntInfo.m_csUsrID = (char*)_bstr_t(varID);

	oAcntInfo.m_csAcntNO.Trim();
	oAcntInfo.m_csPasswd.Trim();
	oAcntInfo.m_csBalance.Trim();
	oAcntInfo.m_csUsrID.Trim();
	
	m_pRcrdSet->Close();
	m_pRcrdSet.Release();

	return 0;
}

int CDBAdp::updateAcountInfo(const ACOUNT_INFO &oAcntInfo)
{
	if (oAcntInfo.m_csAcntNO.IsEmpty())
	{
		return -1;
	}

	CString csData(""), csCnd("");
	if (!oAcntInfo.m_csBalance.IsEmpty())
	{
		csData += "balance = ";
		csData += oAcntInfo.m_csBalance;
		csData += ", ";
	}
	
	if (!oAcntInfo.m_csPasswd.IsEmpty())
	{
		csData += "passwd = ";
		csData += oAcntInfo.m_csPasswd;
		csData += " ";
	}

	csCnd += "acountNO = ";
	csCnd += oAcntInfo.m_csAcntNO;

	update(_T("Table_Acount"), csData, csCnd);

	return 0;
}