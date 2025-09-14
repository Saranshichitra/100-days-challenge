#include<stdio.h>

int main() {
    int num1,num2,sum;
    printf("enter two numbers:");               // Input two numbers
    scanf("%d %d", &num1, &num2);
    sum=num1+num2;                            //to calculate the sum                              
    printf("Sum = %d\n", sum);  
    getchar();
    getchar();              //to display the sum of two numbers                
    return 0;
}
