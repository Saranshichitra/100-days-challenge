#include <stdio.h>
int main() {
    int n;                                                 //Declaration 
    printf("Enter the number\n");                                 
    scanf("%d", &n);                                      //Accepting value from the user  
    if(n != 0) {                                          //Checking whether number is  not zero
                                                          //Checking whether number is  positive or negative
        if(n > 0) {
            printf("%d is a positive number", n);
        }
        else {
            printf("%d is a negative number", n);
        }
    }
    else {
        printf("You entered 0");
    }
    return 0;
}