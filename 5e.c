/* C-program to enter two values from users choice 
and check whether greater,lesser or equal*/
//Done by Dhanush Kumar,CSE-A
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	if(a>b)
	printf("a is greater");
	else
	printf("b is greater");
	if(a<b)
	printf("a is lesser");
	else
	printf("b is lesser");
	if(a==b)
	printf("a and b are equal");
	else
	printf("a and b are not equal");
	return 0;
}
