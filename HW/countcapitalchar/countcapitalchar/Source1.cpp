#include<stdio.h>
#include<stdlib.h>
void increase(char arr[], int isize)
{
	int i = 0,cnt=0;
	for (i = 0;i < isize;i++)
	{
		if ((arr[i] >='A') &&( arr[i]<='Z'))
		{
			cnt++;
		}
	}
	printf("%d", cnt);
}