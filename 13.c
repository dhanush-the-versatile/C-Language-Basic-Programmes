#include<stdio.h>
int main()
{
    int a=3,b=2,c=4,output=0;
    output=(a++)*(a--)+(b++)*(c--)+c++ -c-- +b-- +a++ +b-- -c--;
    printf("%d",output);
    return 0;
}
