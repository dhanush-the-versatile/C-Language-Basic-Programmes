#include<stdio.h>
int main()
{
    int i=2,j=-1,output=0;
    output=i-- + --i- --i+j++ -j-- + --j-i++ +(i++)*(j--)+ j++ -i--;
    printf("%d",output);
    return 0;
}
