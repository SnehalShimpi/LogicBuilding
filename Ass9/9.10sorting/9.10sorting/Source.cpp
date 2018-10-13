#include<stdio.h>
void increase(int arr[], int isize)
{
	int i = 0,ans=0;
	for (i = 0;i < isize;i++)
	{
		if (arr[i] >arr[i + 1])
		{
			ans = 1;
		}
		else
		{
			ans = 2;
		}
	}
	if (ans == 1)
	{
		printf("sorted");

	}
	else
	{
		printf("not sorted");
	}
}