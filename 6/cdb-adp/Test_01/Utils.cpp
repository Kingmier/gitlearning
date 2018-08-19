#include "StdAfx.h"
#include "Utils.h"
#include <wtypes.h>

CUtils::CUtils(void)
{
}

CUtils::~CUtils(void)
{
}

CString CUtils::getCrntDateTime()
{
	CString csRslt; 
	SYSTEMTIME sysTime;
	GetLocalTime(&sysTime);

	csRslt.Format(_T("%4d%02d%02d%02d%02d%02d"), sysTime.wYear,sysTime.wMonth,sysTime.wDay,sysTime.wHour,sysTime.wMinute,sysTime.wSecond);
	return csRslt;

}