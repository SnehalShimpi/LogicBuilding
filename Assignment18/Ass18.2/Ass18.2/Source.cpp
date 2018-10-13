#include<stdio.h>
void Pattern(int iNo);
int main()
{
	int no = 0;
	printf("Enter the Number\n");
	scanf_s("%d", &no);
	Pattern(no);
	scanf_s("%d", &no);
	return 0;
}
void Pattern(int iNo)
{
	int i = 0, j = 0, idigit = 0, icnt = 0, temp = 0;
	temp = iNo;
	
	while (iNo != 0)
	{
		icnt++;
		idigit = iNo % 10;
		//rev = rev * 10 + idigit;
		iNo = iNo / 10;
	}
	iNo = temp;
	for (i = 1;i <= icnt;i++)
	{
		for (j = 1;j <= icnt;j++)
		{

			while (iNo!= 0)
			{
				idigit= iNo % 10;
				printf("%d\t", idigit);
				iNo = iNo / 10;
			}

		}
		iNo = temp;
		printf("\n");
	}
}