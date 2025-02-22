/*C-program to demonstrate difference between structures and unions*/
//Done By Dhanush Kumar,CSE-A
#include <stdio.h>
struct Structure 
{
    int x;
    float y;
    char z;
};
union Union 
{
    int x;
    float y;
    char z;
};
int main() 
{
    struct Structure s;
    union Union u;
    printf("Size of structure Structure: %d bytes\n", sizeof(s));
    printf("Size of union Union: %d bytes\n", sizeof(u));
    printf("\nIn a structure, memory is allocated for all its members.\n");
    printf("In a union, memory is shared among its members, so only the largest member's size is used.\n");
    return 0;
}
