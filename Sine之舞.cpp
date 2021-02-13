/*
��������:
���FJΪ������ţ�ǿ�������ѧ������,FJ֪����Ҫѧ�����ſ�,������һ���õ����Ǻ���������
������׼������ţ����һ����Sine֮�衱����Ϸ,Ԣ������,�����ţ�ǵļ�������
������
An=sin(1�Csin(2+sin(3�Csin(4+...sin(n))...)
Sn=(...(A1+n)A2+n-1)A3+...+2)An+1
FJ������ţ�Ǽ���Sn��ֵ,�������FJ��ӡ��Sn���������ʽ,�Է�����ţ������
�����ʽ:
����һ������N<201
�����ʽ:
�������Ӧ�ı��ʽSn,��һ�����з�����
����в��ú��ж���Ŀո���С��س���
��������:
3
�������:
((sin(1)+3)sin(1�Csin(2))+2)sin(1�Csin(2+sin(3)))+1
*/

#include<iostream>
using namespace std;

void An(int n, int k)
{
	if (n == k)
		cout << "sin(" << n << ")";
	else
	{
		cout << "sin(" << n;
		char c = (n % 2 == 0 ? '+' : '-');
		cout << c;
		An(n + 1, k);
		cout << ")";
	}
}

void Sn(int n, int k)
{
	if (n == 1)
	{
		An(1, n);
		cout << "+" << k - n;
	}
	else
	{
		cout << "(";
		Sn(n - 1, k);
		cout << ")";
		An(1, n);
		cout << "+" << k - n;
	}
}

int main()
{
	int N;
	cin >> N;
	Sn(N, N + 1);
	cout << endl;
	return 0;
}