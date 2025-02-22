/*C-program to evaluate sum of series*/
#include <stdio.h>
int main()
{
    int i,n;
    float sum=0.0;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+(1.0/i);
    }
    printf("The value is %.2f\n",sum);
    return 0;
}
