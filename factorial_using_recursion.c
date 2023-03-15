
#include<stdio.h>
#include<conio.h>
int fact(int x)
{
	int res;
	if(x==1 || x==0)
		return 1;
	else
		res=x*fact(x-1);
	return res;
}
void main()
{
	int n=3,res;
	res=fact(n);
	printf("result=%d",res);
	getch();

}