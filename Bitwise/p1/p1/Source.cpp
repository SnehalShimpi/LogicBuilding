#include<stdio.h>
int main()
{
	int a = 12, b = 25;
	printf("%d\n", a&b);
		printf("%d\n", a|b);
	printf("%d\n", a^b);
	printf("%d\n", ~b);
	printf("%d\n", ++a + b++);
	scanf("%d", &a);
}