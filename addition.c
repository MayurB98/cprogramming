# include <stdio.h>
#include <conio.h>

void main()
{
	int num1,num2,ans;		// intialize variables
	printf("Enter values of num1 and num2");
	scanf("%d%d",&num1,&num2);			//format specifier used and address given for num1 and num2
	ans = num1 + num2;
	printf("the value of addition :%d",ans);
	getch();

}