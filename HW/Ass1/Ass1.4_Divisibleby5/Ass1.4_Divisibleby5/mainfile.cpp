#include"myheader.h"
int main(int argc, char * argv)
{
	int iValue = 0,iRet=0;
	printf("enter the number\n");
	scanf_s("%d", &iValue);
	iRet = Check(iValue);
	if (iRet == 1)
	{
		printf("no is divisible by 5 \n");
	}
	else
	{
		printf("no is not divisible by 5\n");

	}
	int a;scanf_s("%d", &a);
	return 0;

}