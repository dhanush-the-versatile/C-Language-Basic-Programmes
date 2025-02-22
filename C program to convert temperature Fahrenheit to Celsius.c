/* C program to convert temperature Fahrenheit to Celsius */
// Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main()
{
     int F;
     float cel;
     printf("Enter Temperature in Fahrenheit  ");
     scanf("%d",&F);
     cel=(F-32)/1.8;
     printf("Temperature in Celsius = %f", cel);
      
}