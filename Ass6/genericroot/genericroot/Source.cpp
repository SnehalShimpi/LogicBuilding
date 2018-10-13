#include<stdio.h>
int gen(int);

int main()
{
	int no = 0;
	int ret = 0;
	int final = 0;

	printf("enter the no");
	scanf_s("%d", &no);
	ret = gen(no);
	//printf("%d\n", ret);
	final = gen(ret);
	printf("%d\n", final);

	scanf_s("%d", &no);
	return 0;
}
int gen(int no)
{
	int digit = 0, sum = 0;
	while (no != 0)
	{
		digit = no % 10;
		sum = sum + digit;
		no = no / 10;
		
		
	}
	
	
	return sum;
}