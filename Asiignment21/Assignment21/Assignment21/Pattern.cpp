#include<stdio.h>
void Pattern1(int iNo, int *arr)
{
	int i = 0, j = 0;
	for (i = 0;i < iNo;i++)
	{
		for (j = 0;j <iNo;j++)
		{
			if (i <= j)
			{
				printf("%d\t", arr[j]);
			}
			else
			{
				printf("0\t");
			}

		}
		printf("\n");
	}
	
}
void Pattern2(int iNo, int *arr)
{
	int i = 0, j = 0;

	for (i = 0;i <iNo;i++)
	{
		if (i % 2 != 0)
		{
			for (j = iNo;j > 0;j--)
			{
				if (j % 2 != 0)
				{
					printf("%d\t", arr[j]);
				}
				else
				{
					printf("00\t");
				}

			}
		}
		else
		{

			for (j = 0;j < iNo;j++)
			{
				if (j % 2 == 0)
				{
					printf("%d\t", arr[j]);
				}
				else
				{
					printf("00\t");
				}

			}
		}
		printf("\n");

	}




}
void Pattern3(int iNo, int *arr)
{
	int i = 0, j = 0;
	for (i = 0;i < iNo;i++)
	{
		for (j = 0;j <iNo;j++)
		{
			if (i < j)
			{
				printf("%d\t", arr[j]);
			}
			else
			{
				printf("0\t");
			}

		}
		printf("\n");
	}
	
}
void Pattern4(int iNo, int *arr)
{
	int i = 0, j = 0;


	for (i = 0;i < iNo;i++)
	{
		for (j = 0;j <iNo;j++)
		{


			printf("%d\t", arr[i]);
		}

		printf("\n");
	}
	
}

void Pattern5(int iNo, int *arr)
{
	int i = 0, j = 0;


	for (i = 0;i < iNo;i++)
	{
		for (j = 0;j <iNo;j++)
		{
			if (j % 2 == 0)
			{

				printf("%d\t", arr[i]);
			}
			else
			{
				printf("00\t");
			}
		}

		printf("\n");
	}
	
}
