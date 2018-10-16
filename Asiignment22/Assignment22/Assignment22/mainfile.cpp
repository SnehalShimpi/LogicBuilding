#include<stdio.h>
#include<malloc.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
void Pattern1(int iNo, int *arr);
void Pattern2(int iNo, int *arr);
void Pattern3(int iNo, int *arr);
void Pattern4(int iNo, int *arr);
void Pattern5(int iNo, int *arr);
int main()
{
	BOOL Running = TRUE;
	int *brr = NULL;
	int no,iChoice;
	int i = 0;
	printf("Enter the no of Elements");
	scanf_s("%d", &no);

	brr = (int *)malloc(no * sizeof(int));
	if (brr == NULL)
	{
		printf("Unable to allocate memory");
	}
	printf("Enter the Elements of array\n");
	for (i = 0;i<no;i++)
	{
		scanf_s("%d", &brr[i]);
	}
	



	while (Running)
	{
		printf("\nEnter your choice\n");
		scanf_s("%d", &iChoice);
		switch (iChoice)
		{
		case 1:
			Pattern1(no, brr);

			
				break;
		case 2:
			Pattern2( no, brr);
			break;
		case 3:
			Pattern3(no ,brr);
			break;
		case 4:
			Pattern4(no, brr);
			break;
		case 5:
			Pattern5(no, brr);
			break;
		case 0:
			Running = FALSE;
			break;
		default:
			printf("Wrong choice\n");
			break;
		}
	}
	
	return 0;

}