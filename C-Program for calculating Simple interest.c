/* C-Program for calculating Simple Interest */
// Done By Dhanush Kumar,CSE-A
#include<stdio.h>
int main(){
    float principal, rate, time, simpleInterest;
    printf("Enter the principal amount");
    scanf("%f", &principal);
    printf("Enter the rate of interest (in percentage)");
    scanf("%f", &rate);
    printf("Enter the time period (in years)");
    scanf("%f", &time);
   simpleInterest = (principal * rate * time) / 100;
    printf("The Simple interest is %f", simpleInterest);
    return 0;
}