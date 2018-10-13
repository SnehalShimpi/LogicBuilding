#include<stdio.h>
void increase(int arr[], int isize)
{
	int i = 0;
	for (i = 0;i < isize;i++)
	{
		if (((arr[i] % 5) == 0) && ((arr[i] % 3) == 0))
		{
			arr[i]=arr[i]+2;
		}
		else if (arr[i]%3==0)
		{
			arr[i]++;
		}
	}
	for (i = 0;i < isize;i++)
	{
		printf("Element of array After Increasing is =%d\n", arr[i]);
	}
}