#include<stdio.h>
#include<conio.h>
void main(int argc, char *argv[])
{
	int i;
	printf("No of parameters=%d",argc);
	for(i=0;i<argc;i++)
	{
		printf("\n %s",argv[i]);
	}
	getch();

}
// steps for Command line arguments ->
// click on project-> properties -> debugginng -> command line arguments
// dont give comma only space between parameters