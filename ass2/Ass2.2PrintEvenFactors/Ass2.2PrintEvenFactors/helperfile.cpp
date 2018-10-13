#include"myheader.h"
int DisplayEvenFactor(int no)
{
	int icnt = 0,sum=0,Dsum=0;
	if (no < 0)
	{
		no = -no;
	}
	for (icnt = 1;icnt <=no;icnt++)
	{
		if (no % icnt==0 )
		{
			
			sum = sum + icnt;
		}
		if (no%icnt != 0)

		{
			Dsum = Dsum + icnt;
		}
	}
	return (sum-Dsum);
}