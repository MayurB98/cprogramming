/* write a function to accept and display values of structure
student (create multiple variables of structure ) */

#include<stdio.h>
#include<conio.h>

 typedef struct student
{
	int roll_no;
	char name[10];
	float per;

}stud;

stud accept()
{
	stud temp;
	printf("\n Enter roll no,name,percentage");
	scanf("%d %s %f",&temp.roll_no,temp.name,&temp.per);
	return temp;
}
void display(stud)
{
	printf("Roll no=%d \n Name =%s\n percentage=%f",s.roll_no,s.name,s.per);

}

void main()
{
	stud s1,s2;
	s1=accept();
	display(s1);
	s2=accept();
	display(s2);
	getch();
	
}