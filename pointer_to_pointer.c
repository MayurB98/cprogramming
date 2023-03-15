/* write a  pgm to allocate a menmory for 2d array 
where row size and column size are not known*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int **ptr;
	int row,col,i,j;
	printf("\n How many rows and columns you want ");
	scanf("%d%d",&row,&col);
	ptr=(int **)malloc(row*sizeof(int*));
	for(i=0;i<row;i++)
	{
		ptr[i]=(int *)malloc(col*sizeof(int));
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\n Enter array elements");
			scanf("%d",&ptr[i][j]);
		}
	}
	printf("\n Display array elements \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",ptr[i][j]);
		}
		printf("\n");
	}
	free(ptr);
	getch();
}