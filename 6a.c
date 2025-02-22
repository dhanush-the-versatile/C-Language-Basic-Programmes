/*C-Program to find the factorial of a given number*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
   int i,output=1,n;
   printf("enter the number which you want to find its factorial");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    output=output*i;
	}
    printf("Factorial is %d",output);
}
