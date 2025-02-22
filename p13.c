/* C-Program To Calculate The Distance Travelled*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
	int u,t,a,s=0;
	printf("Enter The Values of u,t,a");
	scanf("%d%d%d",&u,&t,&a);
	s=(u*t)+((0.5)*t*t);
	printf("The Distance Travelled is %d",s);
	return 0;
}
