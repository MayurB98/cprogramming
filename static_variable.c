//pgm for demonstration of static variable

#include <stdio.h>
#include<conio.h>
int println();
int println()
{
	static int cnt=0;
	cnt++;
	return cnt;
}

void main()
{

	int count;
	println();
	println();
	println();
	println();
	println();
	count=println();
	printf("count of calling function=%d",count);
	getch();
}








