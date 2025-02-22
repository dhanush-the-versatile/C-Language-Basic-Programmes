/*C-program to swap two numbers without using temporary variables*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter values of a and b: \n");
    scanf("%d%d",&a,&b);
    printf("Elements before swapping: %d\t%d\t",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nElements after swapping: %d\t%d\t",a,b);
    return 0;
}