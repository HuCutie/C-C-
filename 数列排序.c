/*
��������
��������:
����һ������Ϊn�����У���������а���С�����˳������,1<=n<=200
�����ʽ:
��һ��Ϊһ������n��
�ڶ��а���n��������Ϊ�����������ÿ�������ľ���ֵС��10000
�����ʽ:
���һ�У�����С�����˳���������������
��������:
5
8 3 6 4 9
�������:
3 4 6 8 9
*/

#include <stdio.h>
#include <stdlib.h>

void Print(int * data, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d  ",data[i]);
	printf("\n");
}

int main()
{
	int n, i, j, temp;
	int * data;
	scanf("%d",&n);
	data = (int *)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
		scanf("%d",&data[i]);
	for (i = 0; i < n; i++)
		for (j = 0; j < n-1-i; j++)
		{
			if (data[j+1] < data[j])
			{
				temp = data[j];
				data[j] = data[j+1];
				data[j+1] = temp;
			}
		}
	Print(data, n);
	return 0;
}