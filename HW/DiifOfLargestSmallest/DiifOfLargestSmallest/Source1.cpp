#include<stdio.h>
int Largest(int arr[], int size)
{
	int i = 0, max = arr[0],min=arr[0],diff=0;
	for (i = 0;i < size;i++)
	{
		
			if (max <= arr[i])
			{
				max = arr[i];
				
			}
		
	}
	printf("%d", max);

	for (i = 0;i < size;i++)
	{
		
			if (min >= arr[i])
			{
				min = arr[i];
				

			}
		
	}
	printf("%d", min);
	diff = max - min;
	if (diff < 0)
	{
		diff = -diff;
	}
	return diff;
	
}