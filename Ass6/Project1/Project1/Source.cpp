#include<stdio.h>
typedef unsigned int UINT;
int fact(int);
int main()
{
	int no = 0 ,ret=0;
	printf("enter the no ");
	scanf_s("%d", &no);
	ret = fact(no);
	printf("%d", ret);
	scanf_s("%d", &no);
	return 0;

}
int fact(int no)
{
	int digit = 0,sum=0, i=0, factorial=1;
	digit = no % 60;
	while (no != 0)
	{
		digit = no % 10;
		i = no%10;
		for ( i ;i <= 1;i--)
		{
			factorial= factorial * i;
		}
		sum = sum + factorial;
		no = no / 10;
	}
	return sum;
}