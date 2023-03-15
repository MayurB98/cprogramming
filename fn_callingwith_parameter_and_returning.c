#include<stdio.h>
#include<conio.h>
{
	int ans;
	ans=m+n;
	return ans;

}
void main()
{
	int a,b,res;
	printf("\n Enter values of a,b");
	scanf("%d%d",&a,&b);
	res=addition(a,b);
	printf("\n Addition is=%d",res);
	getch();


}
