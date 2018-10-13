#include<stdio.h>
typedef unsigned int UINT;
typedef unsigned long int LONG;
UINT Digit(LONG);

int main()
{
	LONG no = 0;
	printf("enter the no");
	scanf_s("%d", &no);
	UINT iret = Digit(no);
	printf("reverce no is=%d", iret);
	scanf_s("%d", &no);
	return 0;
}
UINT Digit(LONG value)
{
	UINT icnt = 0, digit = 0;

	while (value != 0)
	{
		digit = value % 10;
		

		value = value / 10;
	}
	return digit;
}