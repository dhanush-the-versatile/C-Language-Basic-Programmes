/* C-program to enter your name,surname and display it*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
#include<string.h>
int main()
{
	char name[50],sur_name[50];
	printf("enter your name");
	gets(name);
	printf("enter your surname");
	gets(sur_name);
	printf("My name is");
	puts(name);
	printf("My Surname is");
	puts(sur_name);
	return 0;
}
