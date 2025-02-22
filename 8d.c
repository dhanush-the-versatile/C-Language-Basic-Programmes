/*C-program to add two numbers with 
return types and with return values*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int add(int a, int b);
int main() 
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
int add(int a, int b) 
{
    int sum=a+b; 
    printf("The Sum is %d\n", sum); 
}
