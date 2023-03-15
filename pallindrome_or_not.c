#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rem,rev=0,temp;
	printf("Enter number");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	
	}
	if(temp==rev)
	{
		printf("It is pallindrome");
	}
	else
		printf("It is not a pallindrome");
	getch();


}
