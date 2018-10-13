#include<stdio.h>
#include<stdlib.h>
void add(int arr[], int isize);
int main()
{
	int *brr = NULL;
	int no = 0;
	printf("enter the length of array");
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
		scanf_s ("%d", &brr[i]);
	}
	add(brr, no);
	scanf_s("%d", &no);
	return 0;
	
}