#include<stdio.h>

void increase(int arr[], int arr2[], int isize)
{
	int i = 0, j = 0,result=0;
	for (i = 0;i < isize;i++)
	{
		for (j = 0;j < isize;j++)
		{
			if (arr[i] !=arr2[j])
			{
				break;
			}
			else
			{
				printf("arrays are equal\n");
			}
			
		}
	}
	
		
	
}