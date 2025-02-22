/*C program to copy one structure variable to another structure of the same type*/
//Done By Dhanush Kumar,CSE-A
#include <stdio.h>
struct Person 
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    struct Person person1 = {"Dhanush Kumar",18,109549};
    struct Person person2;
    person2 = person1;
    printf("Person 1 details:\n");
    printf("Name: %s\n",person1.name);
    printf("Age: %d\n",person1.age);
    printf("Salary: %.2f\n",person1.salary);
    printf("Person 2 details after copying:\n");
    printf("Name:%s\n",person2.name);
    printf("Age:%d\n",person2.age);
    printf("Salary: %.2f\n",person2.salary);
    return 0;
}
