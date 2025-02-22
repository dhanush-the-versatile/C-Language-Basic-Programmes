/*C Program to find nCr value using functions*/
// Done by Dhanush Kumar, CSE-A
#include <stdio.h>
long factorial(int num) 
{
    if (num==0||num==1) 
        return 1;
    return num*factorial(num-1);
}
long nCr(int n,int r)
{
    return factorial(n)/(factorial(r)*factorial(n-r));
}
int main()
{
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    if (n>=r&&n>=0&&r>=0)
        printf("The value of %dC%d is: %ld\n",n,r,nCr(n,r));
    else
        printf("Invalid input! n and r must be non-negative, and n >= r.\n");

    return 0;
}
