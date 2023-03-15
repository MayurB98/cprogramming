#include<stdio.h>
#include<conio.h>
#define BAL 100000

void main()
{
	int amt;
	printf("Enter amount you want to withdraw");
	scanf("%d",&amt);
#if(amt<BAL)
	printf("Yeah ..you can withdraw");
#endif
	getch();

}