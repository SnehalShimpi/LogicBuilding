#include<stdio.h>
#include<stdlib.h>
void increase(int arr[],int arr2[], int isize);
int main()
{
	int *brr1 = NULL;
	int *brr2 = NULL;
	int no = 0;
	printf("enter the length of array\n");
	scanf_s("%d", &no);
	brr1 = (int*)calloc(no, sizeof(int));
	if (brr1 == NULL)
	{
		printf("unable to allocate memory");
		return -1;
	}
	brr2 = (int*)calloc(no, sizeof(int));
	if (brr2 == NULL)
	{
		printf("unable to allocate memory");
		return -1;
	}
	printf("Enter the Elements\n");
	for (int i = 0;i < no;i++)
	{
		scanf_s("%d", &brr1[i]);
	}
	printf("Enter the Elements\n");
	for (int j = 0;j < no;j++)
	{
		scanf_s("%d", &brr1[j]);
	}
	increase(brr1,brr2, no);
	scanf_s("%d", &no);
	return 0;

}