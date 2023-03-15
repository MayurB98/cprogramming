// accept marks and display grades using nested if else
#include<stdio.h>
#include<conio.h>
void main()
{
	int marks;
	printf("Enter total marks");
	scanf("%d",&marks);
	if(marks>=75)
		printf("Grade A");
	else if(marks>=60)
		printf("Grade B");
	else if(marks>=40)
		printf("Grade C");
	else 
		printf("Grade F");

	getch();

		

}