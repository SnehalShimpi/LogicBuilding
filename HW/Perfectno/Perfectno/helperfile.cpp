#include"myheader.h"
void perfect(int no)
{
	int i = 0, sum = 0, rem = 0;
	for (i = 1;i <= (no-1);i++)
	{
		rem = no % i;
		if (rem == 0)
		{
			sum = sum + i;
		}
	}
	if (sum == no)
	{
		printf("no is perfect no");
	}
	else
	{
		printf("no is not perfect no");
	}
}