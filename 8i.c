/* C-program to concatenate strings without using strcat*/
//Done By Dhanush Kumar,CSE-A
#include <stdio.h>
int main() {
    char str1[100], str2[50];
    int i, j;
    printf("Enter the first string: ");
    gets(str1);
	printf("Enter the second string: ");
    gets(str2);
    for (i = 0; str1[i] != '\0'; i++);
    for (j = 0; str2[j] != '\0'; j++, i++) 
	{
        str1[i] = str2[j];
    }
    printf("Concatenated string: %s\n", str1);
	return 0;
}

