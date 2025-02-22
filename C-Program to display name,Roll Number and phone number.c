/* C-program To Display Name, Roll Number, Phone number*/
//Done By Dhanush Kumar,CSE-A
#include<stdio.h>
#include<string.h>
int main()
{
	char name[50],roll_number[11];
	double phone_number[12];
	printf("Enter Your Name ");
	gets(name);
	printf("Enter Your Roll Number ");
	gets(roll_number);
	printf("Enter Your Phone Number ");
	gets(phone_number);
	printf("Your Name is ");
	puts(name);
	printf("Your Roll Number is ");
	puts(roll_number);
	printf("Your Phone Number is ");
	puts(phone_number);
	return 0;
}
