#include<stdio.h>
#include<conio.h>

void main()
{
	int cp,sp; // cost price, selling price
	printf("Enter cost price and selling price");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
		printf("There is profit");
	else
		printf("There is loss");

	getch();


}