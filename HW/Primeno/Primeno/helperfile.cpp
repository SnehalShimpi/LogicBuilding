#include"myheader.h"
void Prime(int iNo)
{
	int i = 0;
	int ans;
	/*if (iNo <= 0)
	{
		return;
	}*/
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	for( i=2;i<=(iNo/2);i++)
	{     
		if( iNo % i==0);
		{
			ans = 1;
		}
		
	 }
	if (ans == 1)
	{
		printf("it is not prime no");
	}
	else
	{
		printf("it is prime no");
	}
	
}