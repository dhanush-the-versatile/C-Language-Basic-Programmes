/* C Program To Calculate Compund interest*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
#include<math.h>
int main()
{
	double principal, rate, time, compoundInterest;
	int n;
	printf("Enter the Principal Amount ");
	scanf("%d",&principal);
	printf("Enter the annual interest ");
	scanf("%d",&rate);
	printf("Enter the time period ");
	scanf("%d",&time);
	printf("Enter the number of times interest applied per time period ");
	scanf("%d",&n);
	compoundInterest = principal * pow((1 + (rate / (n * 100))), n * time);
	printf("compound interest is %d",compoundInterest);
	return 0;
}
