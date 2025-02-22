/*C-Program To Calculate the amount to be deposited
to the number of electricity units consumed by the customer*/
// Done By Dhanush Kumar, CSE-A
#include <stdio.h>
int main() 
{
    int units = 0, amount = 0;
    printf("Enter the units: ");
    scanf("%d", &units);
    if (units >= 0 && units <= 99) 
    {
        amount = 150;
        printf("Your amount is %d\n", amount);
    } else if (units >= 100 && units <= 149) {
        amount = 300;
        printf("Your amount is %d\n", amount);
    } else if (units >= 150 && units <= 199) {
        amount = 500;
        printf("Your amount is %d\n", amount);
    } else if (units == 200) {
        amount = 750; 
        printf("Your amount is %d\n", amount);
    } else if (units > 200) {
        amount = units * 10;
        printf("Your amount is %d\n", amount);
    } else {
        printf("Enter the correct units - invalid units\n");
    }
     return 0;
}

