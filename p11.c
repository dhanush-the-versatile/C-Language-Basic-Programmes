/* C-program to calculate The Compund Interest*/
// Done By Dhanush Kumar,CSE-A
#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r,n,ci=0;
	printf("Enter the values of p,t,r,n");
	scanf("%d%d%d%d",&p,&t,&r,&n);
	ci=p*pow((1+r/(n*100)),(n*t));
	printf("The compund interest is %d",ci);
	return 0;
}
