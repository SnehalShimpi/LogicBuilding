#include<stdio.h>
#include<malloc.h>


void Pattern1(int iNo, int *arr)
{
	int i = 0, j = 0;
	int idigit = 0, rev = 0;


	for (i = 0;i < iNo;i++)
	{
		for (j = 0;j <iNo;j++)
		{
			int k = arr[j];
			rev = 0;
			while (k != 0)
			{
				
				idigit = k % 10;
				rev = rev * 10+idigit;
				k = k / 10;
			}

			printf("%d\t",rev);
		}

		printf("\n");
	}
	
}

void Pattern2(int iNo, int *arr)
{
	int i = 0, j = 0;
	int idigit = 0, rev = 0;


	for (i = 0;i < iNo;i++)
	{
		if (i % 2 != 0)
		{
			for (j = 0;j < iNo;j++)
			{
				int k = arr[j];
				rev = 0;
				while (k != 0)
				{

					idigit = k % 10;
					rev = rev * 10 + idigit;
					k = k / 10;
				}

				printf("%d\t", rev);
			}
		}
		else
		{
			for (j = 0;j < iNo;j++)
			{
				printf("%d\t", arr[j]);
			}
		}

		printf("\n");
	}
}

	void Pattern3(int iNo, int *arr)
	{
		int i = 0, j = 0;
		int idigit = 0, rev = 0;


		for (i = 0;i < iNo;i++)
		{
			
			for (j = 0;j < iNo;j++)
			{
				if (arr[j] % 2 == 0)
				{

					printf("%d\t", arr[j]);
				}
			}
			
			

			printf("\n");
		}
	
	
}

	void Pattern4(int iNo, int *arr)
	{
		int i = 0, j = 0;
		int idigit = 0;


		for (i = 0;i < iNo;i++)
		{

			for (j = 0;j < iNo;j++)
			{
				int k = arr[j];
				int isum = 0;
				while (k != 0)
				{
					idigit = k % 10;
					isum = isum + idigit;
					k = k / 10;

				}
				printf("%d\t",isum);
				
			}



			printf("\n");
		}

		
	}
	void Pattern5(int iNo, int *arr)
	{
		int i = 0, j = 0;
		int idigit = 0;
         for (i = 0;i < iNo;i++)
		{

			for (j = 0;j < iNo;j++)
			{
				if ((i == 0) || (j == 0) || (i == iNo-1) || (j == iNo-1))
				{
					int k = arr[j];
					int isum = 0;
					while (k != 0)
					{
						idigit = k % 10;
						isum = isum + idigit;
						k = k / 10;

					}
					
					printf("%d\t",isum);
				}

				else
				{
					printf("0\t");
				}
			}
             printf("\n");
		}
		
	}
	


	