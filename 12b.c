/* C-program to find the lcm of two numbers*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int lcm(int n1, int n2);
int main()
{
	int n1,n2,temp;
	printf("enter the values of n1,n2:\n");
	scanf("%d%d",&n1,&n2);
	if(n1>n2)
	temp=lcm(n2,n1);
	else 
	temp=lcm(n1,n2);
	printf("The LCM Value is %d",temp);
	return 0;
}
int lcm(int n1,int n2)
{
	static int multiple=0;
	multiple=multiple+n2;
	if((multiple%n1==0)&&(multiple%n2==0))
	return multiple;
	else 
	return lcm(n1,n2);
}
