#include<stdio.h>
void increase(int arr[], int isize)
{
	int i = 0,istart = 0,iend=(isize-1),temp=0;
	while (istart < iend)
	{
		temp = arr[iend];
		arr[iend] = arr[istart];
		arr[istart] = temp;
		istart++;
		iend--;

	}
	for (i = 0;i < isize;i++)
	{
		printf("Element of array  is =%d\n", arr[i]);
	}
}