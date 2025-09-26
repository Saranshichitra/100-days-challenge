#include <stdio.h>
int main() {
    int num1, num2, t;                                                                                  //Declaration
    char ch;
    printf("Enter the 2 numbers and the opearation you want to perform (+, -, *, /, %) \n");
    scanf("%d %d %c", &num1 ,&num2 ,&ch);                                                              //Accepting value from the user 
    switch (ch) {                      
        case '+':                                                                                      
        t = num1 + num2; 
        printf("%d", t);
        break;
        case '-':
        if (num1 > num2) {
        t = num1 - num2; 
        printf("%d", t);
        }
        if ( num1 < num2 ) {
            t = num2 - num1;
            printf("%d", t);
        }
        break;
        case '*':
        t = num1 * num2; 
        printf("%d", t);
        break;
        case '/':
        if ( num1 > num2 ) {
        t = num1 / num2; 
        printf("%d", t);
        }
        if ( num2 > num1 ) {
         t = num2 / num1;
         printf("%d", t);     
        }
        break;
        case '%':
        if ( num1 > num2 ) {
        t = num1 % num2; 
        printf("%d", t);
        }
        if ( num2 > num1 ) {
         t = num2 % num1;
         printf("%d", t);     
        }
        break;
        default: printf("Invalid choice");
    }
    return 0;
}