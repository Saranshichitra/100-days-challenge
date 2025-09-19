#include <stdio.h>
int main() {
    int n;                                         //Declaration
    printf("Enter the number \n");     
    scanf("%d", &n);                              //Accepting value from the user  
    if(n % 2 == 0) {                              //using conditional statement to check
        printf("%d is even", n);                  //output statement if condition persists 
    }
    else {
        printf("%d is odd", n);                   //output statement for the another case
    }
    return 0;
}