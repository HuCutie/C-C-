/*
��������:
Tom�������ڸ��о�������һ�Ź��ڻ���Ŀγ̣���һ������������Ϊͷ�ۣ�һ��Ⱦɫ�����г�ǧ���������ԣ����Ǵ�0��ʼ��ţ��������򣬼�ǧ���������ڡ�
����˵���ڶ�ѧ�������1234567009��λ���ϵļ��ʱ���⿴�������Ǻ���׼ȷ��������ġ�
���ԣ������е���Ҫһ��ϵͳ��Ȼ��������12 3456 7009ʱ���������Ӧ�����
ʮ������ǧ�İ���ʮ������ǧ���
�ú���ƴ����ʾΪ
shi er yi san qian si bai wu shi liu wan qi qian ling jiu
������ֻ��Ҫ������Ϳ����ˡ�
��������ǰ����������һ��ϵͳ������һ�����������ִ���������������Ķ�д�Ĺ淶תΪ����ƴ���ִ������ڵ�����������һ���ո���񿪡�
ע������ϸ��չ淶������˵��10010��������yi wan ling yi shi�������ǡ�yi wan ling shi������100000��������shi wan�������ǡ�yi shi wan������2000��������er qian�������ǡ�liang qian����
�����ʽ:
��һ�����ִ�����ֵ��С������2, 000, 000, 000��
�����ʽ:
��һ����СдӢ����ĸ�����źͿո���ɵ��ַ�������ʾ������Ӣ�Ķ�����
��������:
1234567009
�������:
shi er yi san qian si bai wu shi liu wan qi qian ling jiu
*/

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char b[10][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	char c[15][5] = {"","","shi","bai","qian","wan","shi","bai","qian","yi","shi" };
	char a[100];
	cin >> a;
	int length = strlen(a);
	for (int i = 0; i < length; i++)
	{
		int j = a[i] - 48;
		if (j == 0)
		{
			if (i < length - 1)
				if (a[i + 1] != 48)
					cout << b[j] << " ";
		}
		else if ((length - i == 2 || length - i == 6 || length - i == 10) && j == 1)
			cout << c[length - i] << " ";
		else if (a[i - 1] == 48 && j == 1)
			cout << c[length - i] << " ";
		else
			cout << b[j] << " " << c[length - i] << " ";
	}
	cout << endl;
	return 0;
}
