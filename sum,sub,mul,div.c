/* C program for add,sub,mul and division*/
// done by Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{int a,b,sum=0,sub=0,mul=0,div=0;
printf("enter the values of a and b");
scanf("%d%d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("The sum is %d",sum);
printf("The value after subtraction is %d",sub);
printf("The product is %d",mul);
printf("The Quotient is %d",div);
return 0; }
