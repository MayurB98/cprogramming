/* write a pgm to create structure for stuident 
with data member ,rollno,name,percentage  */
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
	printf("Enter rollno ,name,percentage");
	scanf("%d %s %f",&s.roll_no,s.name.&s.per);
	printf("\n Roll no =%d \n Name=%s \nPercentage =%f ",s.roll_no,s.name,s.per);
	getch();
}