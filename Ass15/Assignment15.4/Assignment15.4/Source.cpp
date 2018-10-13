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
	for (j = 1;j <= num2;j++)
	{
		printf("\n");
		for (i = 1;i <= num1;i++)
		{

			printf("%d\t",i);
			//printf("\n");

		}
	}
	scanf_s("%d", &num1);
}