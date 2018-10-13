#include"myheader.h"
int main()
{
	UINT no = 0,iRet=0;
	printf("enter no\n");
	scanf_s("%d", &no);
	iRet = Subtract(no);
	if (iRet == 0)
	{
		printf("error");
	}
	else
	{
		printf("subtracted val is=%d\n", iRet);
	}
	scanf_s("%d", &no);
	return 0;

}