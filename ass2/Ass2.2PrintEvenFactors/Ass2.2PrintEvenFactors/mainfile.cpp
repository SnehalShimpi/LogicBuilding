#include"myheader.h"
int main()
{
	int no = 0,ret=0;
	printf("enter the value of no");
	scanf_s("%d", &no);
	ret=DisplayEvenFactor(no);
	printf("%d", ret);
	scanf_s("%d", &no);
	return 0;

}