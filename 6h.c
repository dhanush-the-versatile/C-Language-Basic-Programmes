/* C- program to add two single dimensional
arrays and display its sum */
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int a[5],b[5],sum[5],i;
	printf("enter the elements in array 1");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements in array 2");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Add the array 1 and 2");
	for(i=0;i<5;i++)
	{
		sum[i]=a[i]+b[i];
	}
	printf("The elements in the sum array are\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",sum[i]);
	}
	return 0;
}

