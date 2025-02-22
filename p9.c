/*C-Program To convert temperature from fahrenheit scale to celsius*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int f,c=0;
	printf("Enter The value of F");
	scanf("%d",&f);
	c=0.55*(f-32);
	printf("The value of c is %d",c);
	return 0;
}
