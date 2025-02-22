/*C-program to add two numbers without 
return types and with return values*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
add(int a, int b);
int main() 
{
    int a, b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
add(int a, int b) 
{
    int sum=a+b; 
    printf("The Sum is %d",sum); 
}
