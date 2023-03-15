#include<stdio.h>
#include<conio.h>
#define AMT 500
#define BAL 50000

void main()
{
#if(AMT<BAL)
	printf("Yeah... you can withdraw amount");
#else
	printf("Sorry .. Balance is low can't withdraw");
#endif
	getch();


}