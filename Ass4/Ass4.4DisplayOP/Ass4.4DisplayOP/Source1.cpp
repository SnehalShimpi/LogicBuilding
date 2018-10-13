#include<stdio.h>
typedef unsigned int UINT;
typedef unsigned long int LONG;
void Digit(LONG);

int main()
{
	LONG no = 0;
	printf("enter the no");
	scanf_s("%d", &no);
	Digit(no);
	//printf("occurance of digit 5 is=%d", iret);
	scanf_s("%d", &no);
	return 0;
}
void Digit(LONG value)
{
	UINT icnt = 0, digit = 0;

	while (value != 0)
	{
		digit = value % 10;
		if (digit==0)
		{
			printf("ZERO");
		}
		if (digit==1)
		{
			printf("ONE");
		}
		if (digit == 2)
		{
			printf("TWO");
		}
		if (digit == 4)
		{
			printf("FOUR");
		}
		if (digit == 5)
		{
			printf("FIVE");
		}
		if (digit == 6)
		{
			printf("SIX");
		}
		if (digit == 7)
		{
			printf("SEVEN");
		}
		if (digit == 1)
		{
			printf("EIGHT");
		}
		if (digit == 1)
		{
			printf("NINE");
		}

		value = value / 10;
	}
	