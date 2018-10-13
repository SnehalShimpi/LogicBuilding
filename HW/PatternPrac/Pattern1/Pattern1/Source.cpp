#include<stdio.h>
void Pattern10(int iRow, int iCol)
{
	int i = 0, j = 0;
	for (i = 1;i <= iRow;i++)
	{
		for (j = 1;j <= iCol;j++)
 		{
			printf("*\t");
		}
		printf("\n");
	}

}
void Pattern11(int iRow, int iCol)
{

}
void Pattern12(int iRow, int iCol)
{

}
void Pattern13(int iRow, int iCol)
{

}
int main()
{
	int iValue1 = 0, iValue2 = 0, iChoise = 0;

	printf("Enter the Value of Row\n");
	scanf_s("%d", &iValue1);

	printf("Enter the Value of Col\n");
	scanf_s("%d", &iValue2);

	printf("Enter the Choice\n");
	scanf_s("%d", &iChoise);

	switch (iChoise)
	{
	case 10:
		Pattern10(iValue1, iValue2);
		break;
	
	case 11:
		Pattern11(iValue1, iValue2);
		break;

    case 12:
	     Pattern12(iValue1, iValue2);
	     break;
	
	case 13:
		Pattern13(iValue1, iValue2);
		break;

	default:
		printf("Invalid Choise\n");
		break;
	}






	scanf_s("%d", &iChoise);
	return 0;

}
