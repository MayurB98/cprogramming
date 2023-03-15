#include<stdio.h>
#include<conio.h>
void main()
{
	int num,rev=0,temp,rem;
	printf("Enter a number");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
	
		printf(" Reversed Number is  %d",rev);
	getch();


}
