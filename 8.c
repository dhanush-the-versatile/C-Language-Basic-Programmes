#include<stdio.h>
int main()
{
    int i=2,output=0;
    output=i++ +i++ + ++i;
    printf("%d",output);
    return 0;
}
