#include<stdio.h>
void increase(int arr[], int isize)
{
	int i = 0, max[10] = {},idigit=0,maximum=0,imaxdigit=0;
	
	for (i = 0;i < isize;i++)
	{
		int  temp = arr[i];
		while (temp != 0)
		{
			idigit = temp % 10;
			max[idigit]++;
			temp = temp / 10;

		}
		
	}
	for (i = 0;i <10;i++)
	{
		if (max[i] > maximum)
		{
			maximum = max[i];
			imaxdigit = i;

		}
		
	}
	printf("%d occurs %d times", imaxdigit,maximum);
} 