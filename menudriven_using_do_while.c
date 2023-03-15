#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int choice,a,b,result;
	char ch;
	float div;
	do
	{
		printf("\n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division \n 5.Exit");
		printf("Enter your choice");
		scanf("%d",&choice);

	switch(choice)
	{
	case 1:printf("Enter any 2 numbers");
		   scanf("%d%d",&a,&b);
		   result=a+b;
		   printf("Addition is =%d",result);
		   break;

	case 2:printf("Enter any 2 numbers");
		   scanf("%d%d",&a,&b);
		   result=a-b;
		   printf("Subtraction is =%d",result);
		   break;

	case 3:printf("Enter any 2 numbers");
		   scanf("%d%d",&a,&b);
		   result=a*b;
		   printf("Multiplication is =%d",result);
		   break;

	case 4:printf("Enter any 2 numbers");
		   scanf("%d%d",&a,&b);
		   result=a/b;
		   printf("Division is =%d",result);
		   break;

	case 5:exit(0);

	default:printf("Invalid choice");
			break;
     }
	printf("\n Do you want to continue press if yes then 'Y' or 'y'  ");
	fflush(stdin);
	scanf("%c",&ch);
	}while(ch=='Y' || ch=='y');

	getch();



}