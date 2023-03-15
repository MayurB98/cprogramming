#include<stdio.h>
#include<conio.h>
void main()
{
	int a =10,b=0,res;
	printf("\n a=%d",a);
	res = a++;		//post increment operator
	printf("\n a=%d",a);
	printf("\n res=%d",res);
	res=++a;		// pre increment operator
	printf("\n a=%d",a);
	printf("\n a=%d",res);
	res = -res;		//predecrement operator
	printf("\n res=%d",res);
	res+=10;		//assignment operator
	printf("\n res=%d",res);
	printf("\n !b=%d",!b);	//negation operator
	printf("\n size of res =%d",sizeof(res));
	getch();
}