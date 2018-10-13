#include<stdio.h>
void Pattern(int num);
int main()
{
	int no = 0;
	printf("Enter the value\n");
	scanf_s("%d", &no);
	Pattern(no);

	return 0;
}
void Pattern(int num)
{
	int i = 0;
	for (i = 1;i <= num;i++)
	{
		if (i % 2 != 0)
		{


			int j = i + 64;
			printf("%c\t", j);
		}
		else
		{
			int j = i + 96;
			printf("%c\t", j);
		}
	}
	scanf_s("%d", &num);
}