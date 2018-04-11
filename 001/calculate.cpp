#include<iostream>
#include<string>
#include<iomanip>
//#include<conio.h>
#include<cmath>
#include<stdio.h>

using namespace std;

class Scale
{
public:
	Scale();
	void output_bin(int n);
	void output_hex(int n);

private:
	int a;
};
Scale::Scale()
{
	a = 0;
}
void Scale::output_bin(int n)
{
	char s[60];
	//itoa(n, s, 2);
	sprintf(s, "%d", n);
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
