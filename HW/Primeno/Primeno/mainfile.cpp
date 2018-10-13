#include"myheader.h"
int main(int argc, char *argv[])
{
	int iNo = 0, Ret=0;
	printf("enter the value of iNo");
	scanf_s("%d", &iNo);
	Prime(iNo);
	/*if (Ret == TRUE)
	{
		printf("it is prime");
	}
	else
	{
		printf("it is not prime");
	}*/
	scanf_s("%d", &iNo);
	return 0;
}