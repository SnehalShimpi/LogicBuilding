#include<stdio.h>
int * increase(int arr[], int isize,int arr1[])
{
	int i = 0;
	
	for (i = 0;i < isize;i++)
	{
		arr1[i] = arr[i];
	}
	for (i = (isize - 1);i >= 0;i--)
	{
		printf("%d", arr1[i]);
	}

	 
	return arr1;
}