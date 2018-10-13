#include<stdio.h>
void Largest(int arr[], int size,int no)
{
	int i = 0,j=0, max = arr[0];
	for (i = 0;i < size;i++)
	{
		
			if (arr[i]==no)
			{
				arr[i]=0;

			}
		
	}
	for (i = 0;i < size;i++)
	{
		printf("%d", arr[i]);
	}
}