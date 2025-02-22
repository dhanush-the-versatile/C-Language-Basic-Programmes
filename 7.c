#include<stdio.h>
int main()
{
    int i=2,j=3,output=0;
    output=(i++) + (++j);
    printf("%d",output);
    return 0;
}
