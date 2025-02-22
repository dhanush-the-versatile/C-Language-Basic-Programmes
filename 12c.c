/* C-program to find factorial of given number by using recursive function*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
long int fact(int n);
int main()
{
	int n;
	printf("Enter the positive integer:\t");
	scanf("%d",&n);
	printf("The Factorial of given number is %d",fact(n));
}
long int fact(int n)
{
	if(n>=1)
	return n*fact(n-1);
	else
	return 1;
}
