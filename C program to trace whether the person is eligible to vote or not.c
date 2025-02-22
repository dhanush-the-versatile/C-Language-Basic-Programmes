/* C program to trace whether the person is eligible to vote or not*/
//Done by Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	(age>=18)?printf("Eligible to vote"):printf("Not Elgible to vote");
	return 0;
}
