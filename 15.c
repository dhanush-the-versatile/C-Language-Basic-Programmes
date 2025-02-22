#include<stdio.h>
int main()
{
    int a=2,b=2,output=0;
    output=a++ +a++ -b-- -b-- - --b+b-- *a++;
    printf("%d",output);
    return 0;
}
