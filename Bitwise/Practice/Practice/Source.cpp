
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0


const char *arr[] = { "false", "true" };
// Accept no from user and display its binary format

void DisplayBinary(UINT no)
{
	int idigit = 0;
	while (no != 0)
	{
		idigit=no % 2;
		printf("%d\t", idigit);
		no = no / 2;
	}
}
//accept no from user and display its binary format with true and false keyword

void DisplayBinaryVal(UINT no)
{
	int idigit = 0;
	while (no != 0)
	{
		idigit = no % 2;
		printf("%s\t", arr[idigit]);
		no = no / 2;
	}
}
 //Display Count of 1s in no

int DisplayBinarycnt(UINT no)
{
	int idigit = 0;
	int icnt = 0;
	while (no != 0)
	{
		idigit = no % 2;
		if (idigit == 1)
		{
			icnt++;
		 }
	
		no = no / 2;
	}
	return icnt;
}
//Display Binary using bitwise operator

void DisplayBinaryUsingBitwise(UINT no)
{
	int i = 0;
	int k = 0;
	for (i = 0; i < 31; i++)
	{
		k = no >> i;

		if (k & 1)
			printf("1");
		else
			printf("0");
	}
}
/*4. Write a program which accept one number from user and check whether
its 4th and 7th bit is on or off*/
 
int DisplayOnBit(UINT no)
{
	UINT mask = 0x00000048;
	UINT result = 0;
	result = no | mask;
	
	if (no == result)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
}

/*Write a program which accept one number from user and check whether
its 4th bit is on or off*/

int DisplayOnBit1(UINT no)
{
	UINT mask = 0x00000008;
	UINT result = 0;
	result = no | mask;

	if (no == result)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}

}
//ASSIGNMENT 24

/*1.Write a program which accept one number from user and off 7th bit of that
number.Return modified number.*/

int DisplayModifiedNo(UINT no)
{
	UINT mask =0xFFFFFFBF;
	UINT result = 0;
	result = no & mask;
    
	return result;
}
/*2. Write a program which accept one number from user and off 7th and 10th
bit of that number.Return modified number.*/

int DisplayModifiedNo1(UINT no)
{
	UINT mask = 0xFFFFFDBF;
	UINT result = 0;
	result = no & mask;

	return result;
}

/*3. Write a program which accept one number from user and toggle 7th bit of
that number. Return modified number.*/

int DisplayModifiedNo3(UINT no)
{
	UINT mask = 0x00000040;
	UINT result = 0;
	result = no ^ mask;

	return result;
}
/*4. Write a program which accept one number from user and toggle 7th and
10th bit of that number. Return modified number.*/
int DisplayModifiedNo4(UINT no)
{
	UINT mask = 0x00000240;
	UINT result = 0;
	result = no ^ mask;

	return result;
}
/*5. Write a program which accept one number from user and on its first 4
bits. Return modified number.*/
int DisplayModifiedNo5(UINT no)
{
	UINT mask = 0x0000000F;
	UINT result = 0;
	result = no | mask;

	return result;
}


int main()
{
	BOOL Running =TRUE;
	UINT ival = 0;
	BOOL bret;
	UINT ret = 0;
	printf("\nCase 1: Display Binary No :");
	printf("\nCase 2: Display Its Binary Format with true and false keyword:");
	printf("\nCase 3: Display Binary Count :");
	printf("\nCase 4: Display Binary No Using Bitwise Operator:");
	printf("\nCase 5: Check The 4 & 7 Bits Are On Or Off :");
	printf("\nCase 6: Check The 4 Bit Are On Or Off :");
	printf("\nCase 7: off 7th bit of that number. :");
	printf("\nCase 8: off 7th  and 10 bit of that number. :");
	printf("\nCase 9: Toggle 7th bit of that number. :");
	printf("\nCase 10: Toggle 7th  & 10th bit of that number. :");
	printf("\nCase 11: On First 4  bit of that number. :");




	
	
	while (Running)
	{
		int choice;
		printf("\n\nEnter the no\n");
		scanf("%d", &ival);
		printf("\nEnter the choice\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1: 
			DisplayBinary(ival);
			break;
		case 2: 
			DisplayBinaryVal(ival);
			break;
		case 3:
			bret = DisplayBinarycnt(ival);
			printf("\nCount is=%d", bret);
			
			break;
		case 4:
			DisplayBinaryUsingBitwise(ival);
			break;
		case 5:
			bret=DisplayOnBit(ival);
			if (bret == TRUE)
			{
				printf("\n4 & 7 Bits Are on");
			}
			else
			{
				printf("\n4 & 7 Bits Are Off");
			}
			break;
		case 6:
			bret = DisplayOnBit1(ival);
			if (bret == TRUE)
			{
				printf("\n4 Bits Are on");
			}
			else
			{
				printf("\n4 Bits Are Off");
			}
			break;
		case 7:
			ret=DisplayModifiedNo(ival);
			printf("\nModified no is=%u", ret);
			break;

		case 8:
			ret = DisplayModifiedNo1(ival);
			printf("\nModified no is=%u", ret);
			break;

		case 9:
			ret = DisplayModifiedNo3(ival);
			printf("\nModified no is=%u", ret);
			break;
		case 10:
			ret = DisplayModifiedNo4(ival);
			printf("\nModified no is=%u", ret);
			break;
		case 11:
			ret = DisplayModifiedNo5(ival);
			printf("\nModified no is=%u", ret);
			break;


		

		case 0:
			Running = FALSE;
			break;
		default:
			printf("\nWrong Choice");
			break;


		}

	}
	
	
	
	

	return 0;
}
