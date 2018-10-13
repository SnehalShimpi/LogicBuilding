#include"myheader.h"
void DisplayComFactor(int no1, int no2)
{
	int i = 1;
	while ((i <= no1 / 2) && (i<= no2 / 2))
	{
		if ((no1 % i == 0) && (no2 % i == 0))
		{
			printf("%d\n", i);
			i++;
		}
	}

}