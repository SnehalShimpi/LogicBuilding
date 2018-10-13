#include<stdio.h>
void increase(int arr[], int isize)
{
	int i = 0, start = 0,end = 0;
	for (start=0,end=(isize-1);start < end;start++,end--)
	{
		if (arr[start] == arr[end])
		{
			printf("palimdrome");
		}
		
	}
	
}