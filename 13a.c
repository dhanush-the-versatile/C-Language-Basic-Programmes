/*C-program to swap using call by refernce*/
//Done By Dhanush Kumar,CSE-A
#include <stdio.h>
void swap(int *a, int *b);  
int main() 
{
    int m = 10, n = 20;
    printf("M and N values before swapping: %d %d\n", m, n);
	swap(&m,&n);
	printf("M and N values after swapping: %d %d\n", m, n);
	return 0;
}

void swap(int *a, int *b) 
{
    int temp;  
	temp = *a; 
    *a = *b; 
    *b = temp;
}

