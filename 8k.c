/* C-program to reverse strings without using strrev*/ 
//Done By Dhanush Kumar,CSE-A
#include <stdio.h>
#include <string.h> 
void reverseString(char str[]);
int main() 
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reverseString(str);
    printf("Reversed string: %s\n", str);
	return 0;
}

void reverseString(char str[]) 
{
    int length = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--) 
	{
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

