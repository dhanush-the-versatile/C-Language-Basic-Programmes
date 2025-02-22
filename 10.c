#include<stdio.h>
int main()
{
    int i=4,output=0;
    output=i++ + ++i+ ++i+i++ +2;
    printf("%d",output);
    return 0;
}
