#include<stdio.h>
#include<conio.h>
void area();		//function declaration
void area()			// function defination
{
	int r;
	float res;
	printf("Enter radius of circle");
	scanf("%d",&r);
	res = 3.14*r*r;
	printf("Area of circle is =%f",res);
}

void main()
{
	area();
	getch();

}