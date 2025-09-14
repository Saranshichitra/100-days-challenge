
#include<stdio.h>
int main() {
    int num1, num2,sum,diff,p,div;                 //initialisation
    printf("Enter two numbers: ");                 //input message
    scanf("%d %d", &num1, &num2);                  //accepting value from user
    sum = num1 + num2;                             //adding
    diff = num1 - num2;                            //subtracting
    p = num1 * num2;                               //multipling  
    if (num2 != 0)  
    div = num1 / num2;                             //dividing 
    else
    printf("division is not possible\n");          
    printf("Sum=%d, Difference=%d, Product=%d, Division=%d\n", sum, diff, p, div);
     return 0; 
}