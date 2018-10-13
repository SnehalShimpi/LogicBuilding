#include<stdio.h>
void increase(int arr[], int isize)
{
	int i = 0;
	for (i = 0;i < isize;i++)
	{
		if ((arr[i] % 2) == 0)
		{
			arr[i] =0;
		}
		else 
		{
			arr[i]=1      ;
		}
	}
	for (i = 0;i < isize;i++)
	{
		printf("Element of array After Increasing is =%d\n", arr[i]);
	}
}