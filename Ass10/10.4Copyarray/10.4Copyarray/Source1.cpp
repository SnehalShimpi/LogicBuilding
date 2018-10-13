#include<stdio.h>
void increase(int arr[],int isize1, int arr2[], int isize2,int arr3[],int size)
{
	int i = 0,j=0;
	for (i = 0;i < isize1;i++)
	{
		arr3[i] = arr[i];
		
	}
	for (j = j+i;j < isize2;j++)
	{
		arr3[j] = arr2[j];
	}
	
	for (i = 0;i < size;i++)
	{
		printf("%d", arr3[i]);
	}
	
	

	
}