/*C-Program To Find The roots of the quadratic equation */
// Done By Dhanush Kumar, CSE-A
#include <stdio.h>
#include <math.h>
int main() 
{
    int a,b,c;
    double x1,x2,discriminant; 
	printf("Enter the Co-efficient of x^2\n");
    scanf("%d",&a);
    printf("Enter The Co-Efficient of x\n");
    scanf("%d",&b);
    printf("Enter the Value of constant\n");
    scanf("%d",&c);
	discriminant=b*b-4*a*c; 
	if (discriminant>0) {
        x1=(-b+sqrt(discriminant))/(2*a);
        x2=(-b-sqrt(discriminant))/(2*a);
        printf("Roots are real and different\n");
        printf("Root 1: %.2f\n", x1);
        printf("Root 2: %.2f\n", x2);
    } else if (discriminant==0) {
        x1=-b/(2*a);
        printf("Roots are real and the same.\n");
        printf("Root: %.2f\n",x1);
    } else {
        double realPart=-b/(2 * a);
        double imaginaryPart=sqrt(-discriminant)/(2*a);
        printf("Roots are complex and different.\n");
        printf("Root 1: %.2f + %.2fi\n",realPart,imaginaryPart);
        printf("Root 2: %.2f - %.2fi\n",realPart,imaginaryPart);
    }
	return 0;
}

