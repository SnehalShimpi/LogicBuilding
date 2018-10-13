#include<stdio.h>
typedef unsigned int UINT;
#define MIN 60;
void rent(int);
int main()
{
	int no = 0;
	
	printf("enetr the no");
	scanf_s("%d", &no);
	 rent(no);

	scanf_s("%d", &no);
	return 0;

}
 void rent(int no)
{
	UINT rent = 0;
	int a=0 ,b=0;
	a = no / MIN;
	b = no % MIN;
	printf("%d%d", a, b);
	
}