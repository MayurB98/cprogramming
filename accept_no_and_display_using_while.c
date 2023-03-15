#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	do{
		printf("Enter number");
		scanf("%d",&num);
		printf("\n num is =%d",num);
		num++;
	}while(num<=10);

	getch();


}