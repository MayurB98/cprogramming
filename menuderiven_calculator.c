#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
	int a,b,choice;
	float result;
	printf(" 1.Addition  \n 2.Subtraction  \n 3.Multiplication \n 4. Division \n 5.Exit \n ");
	printf("Enter Choice");
	scanf("%d",&choice);
	printf("Enter  two numbers");
	scanf("%d%d",&a,&b);
	switch(choice)
	{
	case 1: result=a+b;
		printf("Addition is %f",result);
		break;
	case 2: result=a-b;
		printf("Subtraction is %f",result);
		break;
	case 3: result=a*b;
		printf("Multiplication is %f",result);
		break;
	case 4 : result=a/b;
		printf("Division is %f",result);
		break;
	case 5 : exit(0);

	}
	
	getch();
}
