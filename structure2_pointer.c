/* write a pgm to create structure for stuident 
with data member ,rollno,name,percentage
and accessing members using pointers*/
#include<stdio.h>
#include<conio.h>

struct student
{
	int roll_no;
	char name[10];
	float per;

};

void main()
{
	struct student s;
	struct student *p=&s;
	printf("Enter roll_no,name and percentage");
	scanf("%d%s%f",&p->roll_no,&p->name,&p->per);
	printf("\n Roll no =%d \n Name=%s\nper =%f",p->roll_no,p->name,p->per);
	getch();

}