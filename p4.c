/* C-Program to swap two numbers using temporary variables*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int a=5,b=10,temp;
	printf("Elements Before swapping %d%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("Elements after Swapping %d%d",a,b);
	return 0;
}

