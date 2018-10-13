#include"myheader.h"
int main() 
{
	int age = 0;
	int iRet = 0;
	printf("enter the age of person");
	scanf_s("%d", &age);
	iRet = DisplayPrimium(age);
	printf("primium of customer is%d\n",iRet);
	scanf_s("%d", &age);

	



}