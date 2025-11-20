#include<stdio.h>
enum Operation{ADD = 1, SUBSTRACT, MULTIPLY};                  //Declaration of enumeration
int main() {
    enum Operation op;                                       //Declarting enum variable
    int a, b;                                                //Declaration of local variables a and b
    printf("Enter the first number \n");                     //Asking user to enter the first value
    scanf("%d", &a);                                         //Accepting first value from the user
    printf("Enter the second number \n");                    //Asking user to enter the second value
    scanf("%d", &b);                                         //Accepting second value from the user
    printf("Which operation you want to imply(1 for addition, 2 for substraction, 3 to multiply\n");      //Asking user about the operation to perform
    scanf("%d", &op);              //Accepting operation choice from user
    switch(op){                    //Using switch case to do operation as per user's choice
        case 1: printf("Addition = %d", a+b); break;
        case 2: printf("Substraction = %d", a-b); break;
        case 3: printf("Multiplication = %d", a*b); break;
        default: printf("Invalid choice"); break;
    }
    return 0;
}