/* C-Program To Calculate Simple Interest*/
//Done By Dhnaush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int p,t,r,si=0;
	printf("Enter The Principal Amount");
	scanf("%d",&p);
	printf("Enter The Time Period");
	scanf("%d",&t);
	printf("Enter The Rate Of Interest");
	scanf("%d",&r);
	si=(p*t*r)/100;
	printf("The Simple Interest is %d",si);
	return 0;
}
