#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
#include<stdio.h>

#include"calc.h"
using namespace std;

Scale::Scale()
{
	a = 0;
}
void Scale::output_bin(int n)
{
	char s[60] = {0};
	//itoa(n, s, 2);
	int nTmp = n;
	int iCnt = 0;
	while (1)
	{
		if (0 == nTmp)
		{
			break;
		}

		int iMode = nTmp % 2;
		if (iCnt < 60 - 1)
		{
			int iCntTmp = iCnt;
			do
			{
				s[iCntTmp + 1] = s[iCntTmp];
				iCntTmp--;
			}while(iCntTmp >= 0);
			s[0] = iMode + '0';
			iCnt++;
		}
		else
		{
			break;
		}

		nTmp = nTmp / 2;
	}
	
	cout << n << "--" << s << endl;
}
void Scale::output_hex(int n)
{
	char s[60];
	//itoa(n, s, 16);
	sprintf(s, "%d", n);
	cout << n << "--" << s << endl;
}
int main()
{
	Scale s;
	int a;
	cin >> a;
	s.output_bin(a);
	s.output_hex(a);
}
