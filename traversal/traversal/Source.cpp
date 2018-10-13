#include<stdio.h>
void add(int arr[], int size)

{
	int istart = 0, iend = 0;
	for (istart = 0,iend=(size-1);istart < iend;istart++,iend--)
	{
		printf("%d", arr[istart] + arr[iend]);
	}
}