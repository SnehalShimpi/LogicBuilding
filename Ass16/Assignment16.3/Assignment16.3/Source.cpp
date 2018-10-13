#include<stdio.h>
void Pattern1(int iNo1, int iNo2);
int main()
{
	int no1 = 0, no2 = 0;
	printf("Enter the value\n");
	scanf_s("%d", &no1);
	printf("Enter the value\n");
	scanf_s("%d", &no2);
	Pattern1(no1, no2);

	return 0;
}

void Pattern1(int num1, int num2)
{
	int i = 0, j = 0;


	for (i = 1;i <= num1;i++)
	{
		printf("%d\t", 1);
	}
	printf("\n");

	for (i = 1;i <= num1 - 2;i++)
	{
		for (j = 1;j <= num2; j++)
		{
			if (j == 1 || j == num2)
			{
				int k = i;
				k = k + 1;
				printf("%d\t", k);
				
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
	for (i = 1;i <= num1;i++)
	{
		printf("%d\t", num1);
	}

	printf("\n");
	scanf_s("%d", &num1);
}

