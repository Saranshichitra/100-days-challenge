#include <stdio.h>
int main() {
    int n, sum=0;                                               //Declaration and Iniliazation
    printf("Enter the number\n");
    scanf("%d", &n);                                            //Accepting value from the user
    for ( int i = 1, j = 1; j <= n; i = i + 2, j++ ) {
            sum = sum + i;
          }
        printf("Sum of first %d is : %d\n", n, sum);
         return 0;
    }