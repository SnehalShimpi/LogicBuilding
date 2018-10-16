#include<stdio.h>
void Pattern(char *arr);
int main()
{
	char str[30];
	printf("enter the string\n");
	scanf("%[^'\n']s", str);
	Pattern(str);
	scanf("%s", str);
	return 0;
}
void Pattern(char *arr)
{
	int i = 0,j = 0;
	for (i = 0;arr[i] != '\0';i++)
	{
		for (j = 0;arr[j+i] != '\0';j++)
		{
		
			{
				printf("%c\t", arr[j]);
			}
		}
		printf("\n");

	}

}