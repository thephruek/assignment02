#include<stdio.h>
int main()
{
	int a, b, c, total;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	total = a + b + c;
	if (total >= 80 && total <= 100)
	{
		printf("A");
	}
	else if (total >= 75 && total <= 79)
	{
		printf("B+");
	}
	else if (total >= 70 && total <= 74)
	{
		printf("B");
	}
	else if (total >= 65 && total <= 69)
	{
		printf("C+");
	}
	else if (total >= 60 && total <= 64)
	{
		printf("C");
	}
	else if (total >= 55 && total <= 59)
	{
		printf("D+");
	}
	else if (total >= 50 && total <= 54)
	{
		printf("D");
	}
	else if (total >= 0 && total <= 49)
	{
		printf("F");
	}
	else
		printf("Error");
	return 0;
}