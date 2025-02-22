#include<stdio.h>
int main()
{
    int a=5,b=2,output=0;
    output=a++ +a++ +a++ +b++ -b-- +b--+a++ - --b;
    printf("%d",output);
    return 0;
}
