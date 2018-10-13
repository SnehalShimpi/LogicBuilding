#include"myheader.h"
void Fact(int no)
{
	int ans = 1;
	while (no > 0)
	{
		ans=ans*no;
		no--;
		
}
	printf("factorial of no is=%d", ans);
}