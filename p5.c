/* C Program to Swap two numbers without using temporary variable*/
// Done by Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a,b Values");
	scanf("%d%d",&a,&b);
	printf("Elements Before Swapping %d%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Elements after swapping %d%d",a,b);
	return 0;
}
