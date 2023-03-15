#include<stdio.h>
#include<conio.h>
void main()
{
	int s1,s2,s3;	// side
	printf("Enter the sides of triangle");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1==s2 || s2==s3 || s3==s1)
	{
		printf("It is isosceles triangle");

	}
	else
		printf("It is not isosceles triangle");

	getch();

}