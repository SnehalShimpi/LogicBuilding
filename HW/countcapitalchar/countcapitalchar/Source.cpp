#include<stdio.h>
#include<stdlib.h>
void increase(char arr[], int isize);
int main()
{
	char *brr = NULL;
	int no = 0;
	printf("enter the length of array\n");
	scanf_s("%d", &no);
	brr = (char *)calloc(no, sizeof(char));
	if (brr == NULL)
	{
		printf("unable to allocate memory");
		return -1;
	}
	printf("Enter the charcter\n");
	for (int i = 0;i < no;i++)
	{
		scanf_s("%c ", &brr[i]);
	}
	increase(brr, no);
	scanf_s("%d", &no);
	return 0;

}