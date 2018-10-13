#include<stdio.h>
typedef unsigned int UINT;
typedef unsigned long int LONG;
int Mult(UINT);

int main()
{
	LONG no = 0;
	printf("enter the no");
	scanf_s("%d", &no);
	UINT iret = Mult(no);
	printf("multiplication of digit is=%d", iret);
	scanf_s("%d", &no);
	return 0;
}
int Mult(UINT value)
{
	UINT mult = 0, digit = 0;

	while (value != 0)
	{
		digit = value % 10;
		if (digit%2==0)
		{
			mult = mult +digit;
		}
		
		value = value / 10;
	}
	return mult;
}