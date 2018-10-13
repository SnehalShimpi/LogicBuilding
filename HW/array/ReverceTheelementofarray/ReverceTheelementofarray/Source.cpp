#include<stdio.h>
#include<stdlib.h>
void increase(int arr[], int isize);
int main()
{
	int *brr = NULL;
	int no = 0;
	printf("enter the length of array\n");
	scanf_s("%d", &no);
	brr = (int*)calloc(no, sizeof(int));
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
	increase(brr, no);
	scanf_s("%d", &no);
	return 0;

}