#include<stdio.h>
#include<conio.h>
void main()
{
	int ang1,ang2,ang3;
	printf("Enter angles of triangle");
	scanf("%d%d%d",&ang1,&ang2,&ang3);
	if(ang1==60 && ang2==60 && ang3==60)
	{
		printf("It is equilateral triangle");
	}
	else 
		printf("It is not equilateral triangle");

	getch();

}