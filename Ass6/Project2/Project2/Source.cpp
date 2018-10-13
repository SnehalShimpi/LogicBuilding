#include<stdio.h>
void fact(int);
int main()
{
	int no;
	printf("enter no");
	scanf_s("%d", &no);
	fact(no);
	scanf_s("%d", &no);
	return 0;
}
void fact(int no)

{
	int digit = 0,ans=0,i=0,mult=1,sum=0;
	int temp = no;
		while (no != 0)
		{
			digit = no % 10;
			for (i = digit;i >= 1;i--)
			{
				mult = mult * i;
			

			}
			sum = sum + mult;
			mult = 1;
			
			 
			no = no / 10;
		}
		if (sum == temp)
		{
			printf("yes");
		}
		else

		{
			printf("no");
		}
		//printf("%d", sum);
}