/* C-program to find the sum of series*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
long int sum_series(int n);
int main()
{
	int n,op;
	printf("enter the value n:\t");
	scanf("%d",&n);
	sum_series(n);
	op=sum_series(n);
	printf("The Sum of Series is %d",op);
	return 0;
}
long int sum_series(int n)
{
	if(n!=0)
	return n+sum_series(n-1);
	else
	return n;
}
