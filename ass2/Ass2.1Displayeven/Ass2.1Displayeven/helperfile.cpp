#include"myheader.h"
void PrintEven(int no)
{
	if (no <= 0)
	{
		return;
	}
	for (int icnt = 1;icnt <=no*2;icnt++)
		{
		if(icnt%2==0)

			printf("%d", icnt);
		}
	}
