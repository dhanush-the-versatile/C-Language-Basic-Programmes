/*C-program to identify the number of lowercase letters,
uppercase letters,digits and special characters*/
//Done By Dhanush Kumar,CSE-A
#include <stdio.h>
#include <string.h>
int main() 
{
    char name[100];
    int u=0,l=0,d=0,sc=0,i;
    printf("Enter a string: ");
    gets(name);
    int n = strlen(name);
    for ( i = 0; i < n; i++) 
	{
        if (isupper(name[i])) 
		{
            u++;  
        } else if (islower(name[i])){
            l++;
        } else if (isdigit(name[i])) {
            d++;  
        } else 
		{
            sc++; 
        }
    }
    printf("\nNumber of lowercase letters: %d\n", l);
    printf("Number of uppercase letters: %d\n", u);
    printf("Number of digits: %d\n", d);
    printf("Number of special characters: %d\n", sc);
	return 0;
}

