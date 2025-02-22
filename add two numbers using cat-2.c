/*C-program to add two numbers with
return types and without return values*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int add();
int main()
{
    add();
    return 0;
}
int add()
{
    int a,b,sum=0;
    printf("Enter a,b");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("The Sum is %d",sum);
}
