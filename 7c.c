/* C-program to reverse an array*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int a[4]={2,3,5,9},rev[4],i,j;
	printf(" Display The Original Array:\n");
	for(i=0;i<4;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("reverse the original Array");
	for(i=3;i>=0;i--)
	{
		rev[3-i]=a[i];
	}
	printf("\n");
	printf("The reversed array is ");
	for(j=0;j<4;j++)
	{
		printf("%d\t",rev[j]);
	}
	return 0;
}
