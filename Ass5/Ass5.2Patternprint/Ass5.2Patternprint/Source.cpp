#include<stdio.h>

void Pattern(int);
int main()
{
	int no= 0;
	
	printf("enter the no");
	scanf_s("%d", &no);
	Pattern(no);
	
	scanf_s("%d", &no);
	
	return 0;
}
void Pattern(int no)
{
	
	
	int i = 1,j=0;

	for (i = no;i >= 1;i--)
	{
		
		printf("%d", i);
		for (j = i;j >= 1;j--)
		{
			printf("#");
		}
	}
	
}