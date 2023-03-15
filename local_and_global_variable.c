#include<stdio.h>
#include<conio.h>

int m=25;		// global variable
void show()
{
	int y=100;			//local variable
	printf("\n y=%d",y);		//100
	//printf("\n x=%d",x)
}
void main()
{
	int x=50;
	printf("\n x=%d",x);		//50
	//printf("y=%d",y);
	printf("\n m=%d",m);		//25
	show();
	getch();


}