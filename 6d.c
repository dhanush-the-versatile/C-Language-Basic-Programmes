/* C-Program to simulate a calculator using switch case statement*/
//Done By Dhanush Kumar, CSE-A
#include<stdio.h>
int main()
{
    int a,b,output=0;
    char operator;
    printf("Enter the value of A");
    scanf("%d",&a);
    printf("Enter the Value of B");
    scanf("%d",&b);
    printf("ENTER + for addition\n");
    printf("ENTER - for subtraction\n");
    printf("ENTER * for multiplication\n");
    printf("ENTER / for Division\n");
    printf("ENTER percentage symbol for modulo\n");
    printf("Enter Your operator");
    scanf(" %c",&operator);
    switch(operator)
    {
      case '+': output=a+b;
              printf("The sum is %d",output);break;
      case '-': output=a-b;
              printf("The value after subtraction is %d",output);break;
      case '*': output=a*b;
              printf("The product is %d",output);break;
      case '/': output=a/b;
              printf("The Quotient is %d",output);break;
      case '%': output=a%b;
              printf("The Remainder is %d",output);break;
      default: printf("Enter correct operator-invalid opertor");break;        
			  
	}
     return 0;
     }
