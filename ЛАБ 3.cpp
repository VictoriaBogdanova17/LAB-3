#include<stdlib.h>
#include<stdio.h>

int main()
{
	int arr[9];
	int a = 0;
	int b = 0;
	int c = 0;
	int v = 0;
	int k = 0;
	int f = 0;
	setlocale(LC_ALL, "Rus");
	printf("��������� ������\n");
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d ", &arr[i]);
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == 0)
		{
			a++;
			v += arr[i];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < 0)
		{
			b++;
			k += arr[i];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > 0)
		{
			c++;
			f += arr[i];
		}
	}
	printf("���-�� ��������� ������ ����:\n");
	printf("%d", a);
	printf("\n���-�� ������������� ���������:\n");
	printf("%d", b);
	printf("\n���-�� ������������� ���������:\n");
	printf("%d", a);
	printf("\n����� ��������� ������ ����:\n");
	printf("%d", v);
	printf("\n����� ������������� ���������:\n");
	printf("%d", k);
	printf("\n����� ������������� ���������:\n");
	printf("%d", f);
	return 0;
}