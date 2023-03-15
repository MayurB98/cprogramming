#include<stdio.h>
#include<conio.h>
void main ()
{
	int r;
	float area;							// initialize variables
	printf("Enter radius of circle");	// get radius from user
	scanf("%d",&r);						// read value of radius in memory and address 
	area = 3.14 *r*r;					// formula for area
	printf("Area of circle is %f",area); // return result on console
	getch();



}