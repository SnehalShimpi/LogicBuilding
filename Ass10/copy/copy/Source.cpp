#include<stdio.h>
#include<stdlib.h>
int * increase(int arr[], int isize,int arr2[]);
int main()
{
	int *brr = NULL;
	int *brr1 = NULL;
	int no = 0;
	int * ret = 0;
	printf("enter the length of array\n");
	scanf_s("%d", &no);
	brr = (int*)calloc(no, sizeof(int));
	brr1 = (int*)calloc(no, sizeof(int));
	if (brr == NULL)
	{
		printf("unable to allocate memory");
		return -1;
	}
	printf("Enter the Elements\n");
	for (int i = 0;i < no;i++)
	{
		scanf_s("%d", &brr[i]);
	}
	ret=increase(brr, no,brr1);
	printf("Base add is%d", ret);
	scanf_s("%d", &no);
	return 0;

}