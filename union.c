// create union of student
#include<stdio.h>
#include<conio.h>

union student
{
	int roll_no;
	char name[10];
	float per;

};

void main()
{
	union student u;
	printf("Enter rollno,name,percentage");
	scanf("%d%s%f",&u.roll_no,u.name,&u.per);
	printf("\n Roll no =%d \n Name=%s \n Per=%f",u.roll_no,u.name,u.per);
	getch();


}