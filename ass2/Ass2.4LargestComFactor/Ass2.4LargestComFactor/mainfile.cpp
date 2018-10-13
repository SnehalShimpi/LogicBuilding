#include"myheader.h"
int main()
{
	int no1 = 0, no2 = 0;

	printf("enter the two no");
	scanf_s("%d%d", &no1, &no2);
	DisplayComFactorLarge(no1, no2);
	scanf_s("%d", &no1);
	return 0;
}