/*C-program to copy one string to another string with using pointers*/
//Done By Dhanush Kumar,CSE-A
#include <stdio.h>
int main() 
{
    char source[100], destination[100];
    char *src_ptr, *dest_ptr;
    printf("Enter a string ");
    gets(source);
    src_ptr = source;
    dest_ptr = destination;
    while (*src_ptr != '\0')
	 {
        *dest_ptr = *src_ptr;  
        src_ptr++;           
        dest_ptr++;
    }
    *dest_ptr = '\0';
    printf("Copied string %s", destination);
	return 0;
}

