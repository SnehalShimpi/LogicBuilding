#include"myheader.h"
int main()
{
	int iNo1 = 0, iNo2 = 0,iRet=0;
	printf("enter the value of ino1\n ");
	scanf_s("%d", &iNo1);
	printf("enter the value of iNo2\n");
	scanf_s("%d", &iNo2);
	iRet=Devide(iNo1, iNo2);
	if (iRet == -1)
	{
		printf("numerator should be greater than denomenoter");
	}
	else
	{
		printf("devision is =\n%d", iRet);
	}
	scanf_s("%d", &iNo1);
	return 0;
}