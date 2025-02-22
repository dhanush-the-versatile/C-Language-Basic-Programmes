#include<stdio.h>
int main()
{
    int i=6,j=0;
    j=(++i)+(i++);
    printf("%d",j);
    return 0;
}