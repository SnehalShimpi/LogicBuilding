#include<stdio.h>
#include<malloc.h>
void Largest(int arr[], int,int);
int main()
{
	int no = 0,i=0,ret=0;
	int *brr = NULL;
	printf("Enter the number of Elment");
	scanf_s("%d", &no);
	brr = (int*)calloc(no, sizeof(int));
	if (brr == NULL)
	{
		printf("unable Allocate the memory");
		return -1;
	}
	printf("\nEnter the values ");
	for (i = 0;i < no;i++)
	{
		scanf_s("%d",& brr[i]);
	}
	Largest(brr, no,5);
	//printf("Largest Element is%d", ret);
	free(brr);
	
	scanf_s("%d", &no);
	return 0;
}