#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,temp;
	printf("Enter values of a and b");
	scanf("%d%d",&a,&b);
	printf("Value Before Swapping %d%d \n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("Value After Swapping %d%d \n",a,b);
	getch();

}