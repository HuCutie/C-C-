/*
��������:
���Ĵ�����һ��������ַ��������������Ҷ��ʹ����������һ���ġ�С������Ϊ���Ĵ����������ġ����ڸ���һ����������һ���ǻ��ĵģ�����������ٵĽ�������ʹ�øô����һ�������Ļ��Ĵ���
�����Ķ����ǣ������������ڵ��ַ�
����mamad
��һ�ν��� ad : mamda
�ڶ��ν��� md : madma
�����ν��� ma : madam(���ģ�������)
�����ʽ:
��һ����һ������N����ʾ���������ַ����ĳ���(N <= 8000)
�ڶ�����һ���ַ���������ΪN.ֻ����Сд��ĸ
�����ʽ:
������ܣ�������ٵĽ���������
�������Impossible
��������:
5
mamad
�������:
3
*/

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char * s = new char[n];
	cin >> s;
	int i, j, t, l, p;
	j = n - 1;
	int flag = 0;
	int step = 0;
	for (i = 0; i < j; i++)
	{
		t = j;
		while (s[i] != s[t])
			t--;
		char temp;
		if (i == t)
		{
			flag++;
			if (n % 2 == 0 || flag > 1)
			{
				cout << "Impossible" << endl;
				return 0;
			}
			step += n / 2 - i;
			continue;
		}
		if (s[i] == s[t])
		{
			step += j - t;
			temp = s[t];
			for (l = t; l < j; l++)
				s[l] = s[l + 1];
			s[l] = temp;
			j--;
		}
	}
	cout << step << endl;
	return 0;
}