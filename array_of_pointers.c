/*alloactaing memory for 2d array where row size known
but colsize is not known */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int *ptr[3],col,i,j;
	printf("Enter how many col you have to create");
	scanf("%d",&col);
	for(i=0;i<3;i++)
	{
		ptr[i]=(int *)malloc(col*sizeof(int));
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter array element");
			scanf("%d",&ptr[i][j]);
		}
	}
	printf("Display array elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",ptr[i][j]);
		}
		printf("\n");
	}
	getch();
}
