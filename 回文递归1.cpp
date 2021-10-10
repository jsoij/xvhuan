#include<iostream>
#include<string>
#include<cstring>
#include<string.h>
#pragma warning(disable:4996)
using namespace std;

bool is_huiwen(char* str, int size)
{
	if (size <= 1)
		return true;
	if (str[0] != str[size - 1])
		return false;
	return is_huiwen(++str, size-2);

}
int main()
{
	string s;
	cin >> s;
	char c[20];
	strcpy(c, s.c_str());
	if ( is_huiwen( c, s.size() ) )
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout << "No" << endl;
	}
	return 0;
}
