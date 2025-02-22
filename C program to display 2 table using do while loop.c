/* C program to display the multiplication table of 2 using do-while loop */
// Done By Dhanush Kumar, CSE-A
#include <stdio.h>
int main() 
{
    int i=1; 
    do {
        printf("2*%d=%d\n",i,2*i);
        i=i+1; 
    }while(i<=10);
	return 0; 
}

