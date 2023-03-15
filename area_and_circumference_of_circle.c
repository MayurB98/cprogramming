// pgm to calculate area and circumference of circle.
//display result in main using function call by address
#include<stdio.h>
#include<conio.h>

void area_circum(float ,float*,float*);
void area_circum(float r,float*area,float *circum)
{	
	*area=3.14*r*r;
	*circum=2*3.14*r;
}


void main()
{
	float r,area,circumference;

	printf("Enter value of radius");
	scanf("%f",&r);

	area_circum(r,&area,&circumference);
	printf(" \n Area of circle is=%f",area);
	printf(" \n Circumference of circle =%f",circumference);

	getch();


}