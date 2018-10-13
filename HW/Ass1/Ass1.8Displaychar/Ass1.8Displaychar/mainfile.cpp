#include"myheader.h"
int main()
{
	char ch;
	printf("enter the character\n");
	sscanf_s("%s", &ch);
	Display(ch);
	sscanf_s("%s", &ch);
	return 0;
}