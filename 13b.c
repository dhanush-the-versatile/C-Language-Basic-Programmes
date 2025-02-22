/* C-program to demonstrate a dangling pointer*/ 
//Done By Dhanush Kumar,CSE-A
#include <stdio.h>
#include <string.h>
int main() 
{
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) 
	{
        printf("Memory allocation failed.\n");
        return -1;
    }
    *ptr = 100;
    printf("Value before free: %d\n", *ptr);
    free(ptr);
    printf("Value after free: %d\n", *ptr);
    ptr = NULL;

    return 0;
}

