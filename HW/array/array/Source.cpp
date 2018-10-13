#include<stdio.h>

void Add(int *brr, int size)
{
	int i = 0 , j=0;
	for (i = 0; i<size;i++)
	{
		
			printf("%d", brr[i]);
		
	}
}
int main()
{
	int i = 0;
	int arr[2] = { 0 };
	printf("Enter The Number\n");
	for (i = 0;i <= 2;i++)
	{
		scanf_s("%d\n", &arr[i]);
	
	}
	Add(arr, 3);
	scanf_s("%d\n", &i);

	
}