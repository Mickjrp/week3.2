#include <stdio.h>
int i, j, k;

void check()
{
	int s = i + j + k;

	if (s >= 80 && s <= 100)
	{
		printf("Grade:A\n");
	}
	else if (s >= 75 && s <= 79)
	{
		printf("Grade:B+\n");
	}
	else if (s >= 70 && s <= 74)
	{
		printf("Grade:B\n");
	}
	else if (s >= 65 && s <= 69)
	{
		printf("Grade:C+\n");
	}
	else if (s >= 60 && s <= 64)
	{
		printf("Grade:C\n");
	}
	else if (s >= 55 && s <= 59)
	{
		printf("Grade:D+\n");
	}
	else if (s >= 50 && s <= 54)
	{
		printf("Grade:D\n");
	}
	else if (s >= 0 && s <= 49)
	{
		printf("Grade:F\n");
	}
	else
	{
		printf("ERROR!\n");
	}
}

int main()
{
	printf("��ṹ�红ͧ�ѡ���¹(30): ");
	scanf_s("%d", &i);

	printf("��ṹ�ͺ��ҧ�Ҥ�ͧ�ѡ���¹(30): ");
	scanf_s("%d", &j);

	printf("��ṹ�ͺ�����Ҥ�ͧ�ѡ���¹(40): ");
	scanf_s("%d", &k);
	printf("\n");

	check();

	return 0;
}