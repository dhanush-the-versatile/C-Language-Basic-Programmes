/*C-program to find the sum of a 1D array using malloc*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
int main()
{
	int i,n,*a,*b,*op;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc(n*sizeof(int));
	op=(int *)malloc(n*sizeof(int));
	printf("enter elements into array A\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	printf("enter elements into array B\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",b+i);
	}
	printf("Addition of Arrays A,B\n");
	for(i=0;i<n;i++)
	{
		*(op+i)=*(b+i)+*(a+i);
	}
	printf("Display the Added Array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(op+i));
	}
	return 0;
}
