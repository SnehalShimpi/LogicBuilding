#include<stdio.h>
#include<stdlib.h>
void increase(int arr[],int isize1, int arr2[], int isize,int brr3[],int size);
int main()
{
	int *brr1 = NULL;
	int *brr2 = NULL;
	int *brr3 = NULL;
	int no = 0, no2 = 0;
	printf("enter the length of array\n");
	scanf_s("%d", &no);
		printf("enter the length of array\n");
	scanf_s("%d", &no2);
	brr1 = (int*)calloc(no, sizeof(int));
	if (brr1 == NULL)
	{
		printf("unable to allocate memory");
		return -1;
	}
	brr2 = (int*)calloc(no2, sizeof(int));
	if (brr2 == NULL)
	{
		printf("unable to allocate memory");
		return -1;
	}
	brr3 = (int*)calloc(no+no2, sizeof(int));
	printf("Enter the Elements\n");
	for (int i = 0;i < no;i++)
	{
		scanf_s("%d", &brr1[i]);
	}
	printf("Enter the Elements\n");
	for (int j = 0;j < no2;j++)
	{
		scanf_s("%d", &brr2[j]);
	}
	increase(brr1,no, brr2, no2,brr3,no+no2);
	scanf_s("%d", &no);
	return 0;

}