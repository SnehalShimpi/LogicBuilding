#include<stdio.h>
typedef unsigned long int LONG;


void Min(LONG no)
{
	LONG digit=0,min=0;
	digit = no % 10;
	min = digit;
	
	
	while (no != 0)
	{
		digit = no % 10;

		if (min > digit)
		{
			min = digit;
		}
		no = no / 10;
		if (min == 0)
		{
			break;
		}
	}
	printf("min digit is=%d", min);
}
int main()
{
	LONG no;
	printf("enter the no");
	scanf_s("%d", &no);
	Min(no);
	scanf_s("%d", &no);
	return 0;
}