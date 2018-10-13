#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
///////////////////////////////////////////
//
// Innput : 4 4
//
// Output
// * * * *
// * * * *
// * * * *
// * * * *
//
///////////////////////////////////////////
void Pattern1(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow <= 0)
	{
		return;
	}
	if (iCol <= 0)
	{
		return;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			printf("*\t");
		}
		printf("\n");


	}
}
///////////////////////////////////////////
//
// Innput : 4 4
//
// Output
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
//
///////////////////////////////////////////
void Pattern2(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow <= 0)
	{
		return;
	}
	if (iCol <= 0)
	{
		return;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			printf("%d\t", j);
		}
		printf("\n");
	}
}

///////////////////////////////////////////
//
// Innput : 4 4
//
// Output
// * * * *
// * $ $ *
// * $ $ *
// * * * *
//
///////////////////////////////////////////
void Pattern3(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow <= 0)
	{
		return;
	}
	if (iCol <= 0)
	{
		return;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if ((i == 1) || (j == 1) || (i == iRow) || (j == iCol))
			{
				printf("*\t");
			}
			else
			{
				printf("$\t");
			}
		}
		printf("\n");
	}
}

///////////////////////////////////////////
//
// Innput : 4 4
//
// Output
// * $ $ $
// $ * $ $
// $ $ * $
// $ $ $ *
//
///////////////////////////////////////////
void Pattern4(int iRow, int iCol)
{
	int i = 0, j = 0;
	if (iRow <= 0)
	{
		return;
	}
	if (iCol <= 0)
	{
		return;
	}
	for (i = 1; i <= iRow; i++)
	{
		for (j = 1; j <= iCol; j++)
		{
			if (i == j)
			{
				printf("*\t");
			}
			else
			{
				printf("$\t");
			}
		}
		printf("\n");
	}
}


///////////////////////////////////////////////////
//   
//    Inuput: 4 5
//
//   $ $ $ $ $
//   # # # # #
//   $ $ $ $ $
//   # # # # #
/////////////////////////////////////

void Pattern5(int num1, int num2)
{
	int i = 0;
	int j = 0;
	for (j = 1;j <= num1;j++)
	{
		printf("\n");
		if (j % 2 != 0)
		{
			for (i = 1;i <= num2;i++)
			{
				printf("$\t");



			}
		}
		else
		{
			for (i = 1;i <= num2;i++)
			{
				printf("#\t");



			}
		}

	}

}

//////////////////////////////////////
//Input: 4 5
//
//	Output :
//	1 $ 3 $ 5
//	1 $ 3 $ 5
//	1 $ 3 $ 5
//	1 $ 3 $ 5
///////////////////////////////////////

void Pattern6(int num1, int num2)
{
	int i = 0;
	int j = 0;
	for (j = 1;j <= num1;j++)
	{
		printf("\n");
		for (i = 1;i <= num2;i++)
		{
			if (i % 2 != 0)
			{
				printf("%d\t", i);
			}
			else
			{
				printf("$\t");
			}
			

		}




	}

}

////////////////////////////////////////
//Input: 4 4
//
//	Output :
//	* * * *
//	* * *
//	* *
//	*
////////////////////////////////////

void Pattern7(int num1, int num2)
{
	int i = 0;
	int j = 0;
	for (j = 1;j <= num1;j++)
	{
		printf("\n");
		for (i = j - 1;i < num2;i++)
		{
			printf("*\t");

		}




	}
}

//////////////////////////////////////////////////
//Input: 4 4
//
//	Output :
//	*
//	* *
//	* * *
//	* * * *
////////////////////////////////////////////////////
void Pattern8(int num1, int num2)
{
	int i = 0;
	int j = 0;
	for (j = 1;j <= num1;j++)
	{
		printf("\n");
		for (i = num2 - j;i < num2;i++)
		{
			printf("*\t");

		}
		




	}
}
//////////////////////////////////////////////////////////
//Input: 4 4
//
//	Output :
//	1 * * *
//	2 3 * *
//	4 5 6 *
//	7 8 9 10
////////////////////////////////////////////////////

void Pattern9(int num1, int num2)
{
	int i = 0;
	int j = 0;
	int k = 1;

	for (j = 1;j <= num1;j++)
	{
		printf("\n");
		for (i = 1;i <= num2;i++)
		{
			if (j >= i)
			{
				printf("%d\t", k);
				k++;
			}


			else
			{
				printf("*\t");
			}
		}
	}
}
void Pattern10(int num1, int num2)
{
	int i = 0,j = 0;
	for (i = 1;i <= num1;i++)
	{
		for (j = 1;j <= num2;j++)
		{
			if (i == 1 || i == num1 || j == 1 || j == num2)
			{
				int k = 64;
				k = k + j;
                printf("%c\t", k);
				
			}
			else
			{
				printf("0\t");
			}
		}
		printf("\n");
	}
}
void Pattern11(int num1, int num2)
{
	int i = 0, j = 0;
	
	for (i = 1;i <= num1;i++)
	{
		for (j = 1;j <= num2;j++)
		{
			if (i%2!=0)
			{
				printf("%d\t", j);
			}
			else
			{
				int no=num1;
				while (no != 0)
				{
					
					printf("%d\t", no);
					no--;

				}
				break;
			}
			
		}
		printf("\n");
}
}
void Pattern12(int num1, int num2)
{
	int i = 0, j = 0;
	int k = 1;
	for (i = 1;i <= num1;i++)
	{
		for (j = 1;j <= num2;j++)
		{
			
			printf("%d\t", k);

		}
		k++;
		printf("\n");
	}
}
void Pattern13(int num1, int num2)
{
	int i = 0, j = 0;
	int k = 1;
	for (i = 1;i <= num1;i++)
	{
		for (j = 1;j <= num2;j++)
		{
			if (j % 2 != 0)
			{
				printf("%d\t", k);
				
			}
			else
			{
				printf("*\t");
			}
		}
		k++;
		printf("\n");
	}
}
void Pattern14(int num1, int num2)
{
	int i = 0, j = 0;
	int k = 1;
	for (i = 1;i <= num1;i++)
	{
		for (j = 1;j <= num2;j++)
		{
			if (i== j)
			{
				printf("$\t");

			}
			
		}
		
		printf("\n");
	}
}
int main()
	{
		BOOL Running = TRUE;
		int iChoice = 0, iValue1 = 0, iValue2 = 0;
		printf("\n-- Marvellous Infosystems : Pattern Printing Application --\n\n");
		while (Running)
		{
			printf("\nEnter number of Rows : \t");
			scanf_s("%d", &iValue1);
			printf("\nEnter number of Columns : \t");
			scanf_s("%d", &iValue2);

			printf("\nEnter your choice\n");
			scanf_s("%d", &iChoice);

			switch (iChoice)
			{
			case 1:
				Pattern1(iValue1, iValue2);
				break;
			case 2:
				Pattern2(iValue1, iValue2);
				break;
			case 3:
				Pattern3(iValue1, iValue2);
				break;

			case 4:
				Pattern4(iValue1, iValue2);
				break;

			case 5:
				Pattern5(iValue1, iValue2);
				break;

			case 6:
				Pattern6(iValue1, iValue2);
				break;

			case 7:
				Pattern7(iValue1, iValue2);
				break;

			case 8:
				Pattern8(iValue1, iValue2);
				break;

			case 9:
				Pattern9(iValue1, iValue2);
				break;
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




			case 0:
				Running = FALSE;
				break;


			default:
				printf("Wrong choice\n");
				break;
			}
		}
		printf("\nTerminating Pattern prinnting Application....\n");
		return 0;
	}
