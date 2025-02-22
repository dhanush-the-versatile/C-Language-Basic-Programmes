/* C program to calculate area(s) of Rectangle and Square*/
// Done by Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int l,b,s,ar=0,as=0;
	printf("Enter The Values of l,b,s");
	scanf("%d%d%d",&l,&b,&s);
	ar=l*b;
	as=s*s;
	printf("Area of Rectangle is %d",ar);
	printf("Area of Square is %d",as);
	return 0;
}
