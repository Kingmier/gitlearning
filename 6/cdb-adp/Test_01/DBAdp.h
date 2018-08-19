#pragma once

#import "c:\program files\common files\system\ado\msado15.dll" no_namespace rename("EOF","adoEOF")

struct ACOUNT_INFO 
{
	CString m_csAcntNO;
	CString m_csUsrID;
	CString m_csBalance;
	CString m_csPasswd;
};

struct CSTM_INFO
{
	CString m_csID;
	CString m_csName;
	CString m_csMobile;
	CString m_csSex;
	CString m_csCmpny;
};

class CDBAdp
{
public:
	CDBAdp(void);
	~CDBAdp(void);

	int addNewAcount(const ACOUNT_INFO &oAcntInfo);
	int addNewCstmInfo(const CSTM_INFO &oCstomInfo);
	
	int queryAcountInfoByAcntNO(ACOUNT_INFO &oAcntInfo);
	int queryCstmInfoByUsrID(const CString &csUsrID, CSTM_INFO &oCstomInfo);

	int updateAcountInfo(const ACOUNT_INFO &oAcntInfo);

private:
	int insert(const CString &csTblName, const CString &csParLst, const CString &csData);
	int select(const CString &csTblName, const CString &csCnd);
	int update(const CString &csTblName, const CString &csData, const CString &csCnd);

	int onInit();

private:
	_ConnectionPtr m_pConPtr;
	_RecordsetPtr m_pRcrdSet;

	CString m_csConnection;
};
