/*
��������:
FJ��ɳ����д������һЩ�ַ�����
A1 = ��A��
A2 = ��ABA��
A3 = ��ABACABA��
A4 = ��ABACABADABACABA��
�� ��
�����ҳ����еĹ��ɲ�д���е�����AN��
�����ʽ:
����һ������N �� 26
�����ʽ:
�������Ӧ���ַ���AN����һ�����з�����������в��ú��ж���Ŀո���С��س���
��������:
3
�������:
ABACABA
*/

#include<iostream>
using namespace std;

void output(int n)
{
	if (n == 0)
		cout << 'A';
	else
	{
		output(n - 1);
		cout << char(n + 'A');
		output(n - 1);
	}
}

int main()
{
	int n;
	cin >> n;
	output(n - 1);
	cout << endl;
	return 0;
}