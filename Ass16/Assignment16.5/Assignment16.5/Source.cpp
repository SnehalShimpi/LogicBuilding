#include<stdio.h>
void Pattern(int num1, int num2);
int main()
{
	int no1 = 0, no2 = 0;
	printf("Enter the value\n");
	scanf_s("%d", &no1);
	printf("Enter the value\n");
	scanf_s("%d", &no2);
	Pattern(no1, no2);

	return 0;
}
void Pattern(int num1, int num2)
{
	int i = 0;
	int j = 0;
	int k = 1;

	for (j = 1;j <= num1;j++)
	{
		printf("\n");
		for (i = 1;i <= num2;i++)
		{
			if (j >= i)
			{
				printf("%d\t", k);
				k++;
			}


			else
			{
				printf("*\t");
			}
		}
	}
	scanf_s("%d", &num1);
}