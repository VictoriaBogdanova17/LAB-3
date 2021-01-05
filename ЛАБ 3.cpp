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
	printf("Заполните массив\n");
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
	printf("Кол-во элементов равных нулю:\n");
	printf("%d", a);
	printf("\nКол-во отрицательных элементов:\n");
	printf("%d", b);
	printf("\nКол-во положительных элементов:\n");
	printf("%d", a);
	printf("\nСумма элементов равных нулю:\n");
	printf("%d", v);
	printf("\nСумма отрицательных элементов:\n");
	printf("%d", k);
	printf("\nСумма положительных элементов:\n");
	printf("%d", f);
	return 0;
}