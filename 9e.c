/* C program to implement realloc() and free()*/
// Done By Dhanush Kumar, CSE-A
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int *)malloc(3 * sizeof(int));
    if(ptr==NULL) 
    {
        printf("Memory allocation failed");
        exit(0);
    }
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr=(int *)realloc(ptr,5*sizeof(int));
    if (ptr==NULL) 
    {
        printf("Memory reallocation failed");
        exit(0);
    }
    ptr[3]=4;
    ptr[4]=5;
    for (int i=0;i<5;i++) 
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;
}
