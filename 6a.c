/*C-Program to find the maximum and minimum of 4-Numbers using if else*/
// Done By Dhanush Kumar,CSE-A
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	printf("Enter The Values of a,b,c,d\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if((a>b)&&(a>c)&&(a>d))
	printf("%d is Maximum\n",a);
	else
	{
		if((b>c)&&(b>d))
		printf("%d is Maximum\n",b);
		else
		{
			if(c>d)
			printf("%d is Maximum\n",c);
			else
			printf("%d is Maximum\n",d);
		}
	}
	if((a<b)&&(a<c)&&(a<d))
	printf("%d is Minimum\n",a);
	else
	{
		if((b<c)&&(b<d))
		printf("%d is Minimum/n",b);
		else
		{
			if(c<d)
			printf("%d is Minimum\n",c);
			else
			printf("%d is Minimum\n",d);
		}
	}
	return 0;
}
