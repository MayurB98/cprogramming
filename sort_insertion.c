#include<stdio.h>
#include<conio.h>

//Insertion sort function
 void insertionSort(int array[],int n)
 {
	 int i,element,j;
	 for(i=1;i<n;i++)
	 {
		 element =array[i];
		 j=i-1;
		 while(j>0 &&array[j]>element)
		 {
			 array[j+1]=array[j];
			 j=j-1;
		 }
		 array[j+1]=element;
	 }
 }

 //function to print elements of aRRAY

 void printArray(int array[],int n)
 {
	 int i;
	 for(i=0;i<n;i++)
		 printf("%d",array[i]);
 }
 void main()
 {
	 int arr[5]={3,1,5,2,7},n=5;
	 insertionSort(arr,n);
	 printArray(arr,n);
	 getch();
 }