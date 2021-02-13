/*
��������:
����n��ʮ��������������������Ƕ�Ӧ�İ˽�����
�����ʽ:
����ĵ�һ��Ϊһ��������n(1<=n<=10��
������n��,ÿ��һ����0~9����д��ĸA~F��ɵ��ַ���,��ʾҪת����ʮ������������,ÿ��ʮ�����������Ȳ�����100000
�����ʽ:
���n�У�ÿ��Ϊ�����Ӧ�İ˽���������
ע��:
�����ʮ��������������ǰ��0,����012A
����İ˽�����Ҳ������ǰ��0
��������:
2
39
123ABC
�������:
71
4435274
*/

#include<iostream>
#include<string>
using namespace std;
void toOx(string s)
{
	int t = s.length() % 3;
	if (t != 0)
		for (int i = 0; i < 3 - t; i++)
			s = '0' + s;
	int sum = 0;
	bool notZ = false;
	for (int i = 0; i < s.length(); i += 3)
	{
		sum = 0;
		for (int j = 0; j < 2; j++)
			sum += (s[i + j] == '0') ? 0 : 2 * (2 - j);
		sum += (s[i + 2] == '0') ? 0 : 1;
		if (sum == 0 && !notZ)
			notZ = true;
		else
		{
			notZ = true;
			cout << sum;
		}
	}
	cout << endl;
}

string toBin(string s)
{
	string st = "";
	for (int i = 0; i < s.length(); i++)
	{
		switch (s[i])
		{
			case '0': st += "0000"; break;
			case '1': st += "0001"; break;
			case '2': st += "0010"; break;
			case '3': st += "0011"; break;
			case '4': st += "0100"; break;
			case '5': st += "0101"; break;
			case '6': st += "0110"; break;
			case '7': st += "0111"; break;
			case '8': st += "1000"; break;
			case '9': st += "1001"; break;
			case 'A': st += "1010"; break;
			case 'B': st += "1011"; break;
			case 'C': st += "1100"; break;
			case 'D': st += "1101"; break;
			case 'E': st += "1110"; break;
			case 'F': st += "1111"; break;
		}
	}
	return st;
}

int main()
{
	int n;
	cin >> n;
	string * s = new string[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	for (int j = 0; j < n; j++)
		toOx(toBin(s[j]));
	delete[] s;
	string st;
	return 0;
}