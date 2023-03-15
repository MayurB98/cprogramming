//Write pgm for digit into words 
#include<stdio.h>
#include<conio.h>
#define NUM 100
void main()
{
#if(NUM==50)
	print("Fifty");
#elif(NUM==100)
	printf("Hundred");
#elif(NUM==600)
	printf("Six Hundred");
#else 
	printf("Num is anything");
#endif
	getch();

}