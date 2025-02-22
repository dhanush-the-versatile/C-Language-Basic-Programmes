/* C-program to find out Fibonacci series*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int fib(int n);
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("The Fibonacci series starts with 0,1\n");
	printf("%d\t%d\t",0,1);
	int op=fib(n-2);
	printf("\n");
	printf("The Fibonacci value is %d",op);
	return 0;
}
int fib(int n)
{
	static int n1=0,n2=1,n3=0;
	if(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d\t",n3);
		fib(n-1);
	}
}
