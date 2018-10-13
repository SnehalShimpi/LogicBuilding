#include<stdio.h>
void increase(int arr[], int isize)
{
	int i = 0, idigit = 0, rem = 0;
	for (i = 0;i < isize;i++)
	{
		while (arr[i] != 0)
		{
			idigit = arr[i] % 10;
			rem = rem + idigit;
			arr[i] = arr[i] / 10;
		}
		arr[i] = rem;
		rem = 0;
		
		
	}
	for (i = 0;i < isize;i++)
	{
		printf("%d", arr[i]);
	}

	
		
}