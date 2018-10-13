#include"myheader.h"
void DisplayComFactorLarge(int no1, int no2)
{
	int i = 1;
	if (no1 > no2)
	{
		i = no1 / 2;
		printf("Largest common factor is %d", i);
	}
	else
	{
		i = no2 / 2;
		printf("largest common factor is %d", i);

	}
}