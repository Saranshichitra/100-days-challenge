#include <stdio.h>
int main() {
    int n, p=1;                                               //Declaration and Iniliazation
    printf("Enter the number\n");
    scanf("%d", &n);                                          //Accepting value from the user
    for ( int i = 2 ; i <= n ; i = i + 2 ) {
            p = p * i;
          }
        printf("Product of 1 to %d even numbers is : %d\n", n, p);
         return 0;
    }