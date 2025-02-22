/* c program to find the string length using functions */
// Done by Dhanush Kumar,CSE-A
#include <stdio.h>
int stringLength(char str[]) 
{
    int length=0;
    while(str[length]!='\0') 
    {
        length++;
    }
    return length;
}
int main() 
{
    char str[100];
    printf("enter a string: ");
    fgets(str);
    int length = stringLength(str);
    printf("the length of the string is: %d\n", length);
    return 0;
}
