/* C-program to calculate area of traingle by herons formula*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,s=0,at=0;
	printf("Enter The values of a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	at=sqrt((s)*(s-a)*(s-b)*(s-c));
	printf("The Area of Triangle is %d",at);
	return 0;
}
