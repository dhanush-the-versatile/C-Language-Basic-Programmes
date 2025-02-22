#include<stdio.h>
int main()
{
    int i=3,j=2,output=0;
    output=j++ +i++ + ++j;
    printf("%d",output);
    return 0;
}
