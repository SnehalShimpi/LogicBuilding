#include<stdio.h>
void pattern(char *str)
{
	int icnt=0;
	int i=0;
	int j=0;
	int k=0;
	int f=0;
	while(*str!='\0')
	{
		icnt++;
		
		str++;
	}
	k=icnt;
	while(k!=0)
	{
		str--;
		
		k--;
	}





	for(i=1;i<=icnt;i++)
	{
		for(j=(icnt-i);j<icnt;j++)
		{
			if(*str!='\0')
			{                              
				f++;
				printf("%c\t",*str);
				str++;       
			}
		}
		printf("\n");
		while(f!=0)
		{
			str--;
			f--;
		}
	}





}
int main()
{
	char ch[30];
	printf("enter the string\n");
	scanf("%[^'\n']s",ch);
	pattern(ch);
	return 0;
}
