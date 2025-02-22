/*C-program to implement assignment operator*/
// Done BY Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the values of a,b,c,d");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	a+=5;
	b-=3;
	c*=4;
	d/=5;
	printf("The value of a is %d\n",a);
	printf("The value of b is %d\n",b);
	printf("The value of c is %d\n",c);
	printf("The value of d is %d\n",d);
	return 0;
}
