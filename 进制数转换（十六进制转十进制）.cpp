/*
ʮ������תʮ����
��������:
�Ӽ�������һ��������8λ������ʮ���������ַ���,����ת��Ϊ����ʮ�����������
ע��ʮ���������е�10~15�ֱ��ô�д��Ӣ����ĸA��B��C��D��E��F��ʾ
��������:
FFFF
�������:
65535
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int length = s.length();
	long sum = 0;
	for (int i = 0; i < length; i++)
	{
		if (s[i] >= 'A'&&s[i] <= 'F')
			sum = sum * 16 + s[i] - 'A' + 10;
		else
			sum = sum * 16 + s[i] - '0';
	}
	cout << sum << endl;
	return 0;
}