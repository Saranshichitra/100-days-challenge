#include <stdio.h>
int main() {
    int n;                                                //Declaration
    printf("Enter the number \n");
    scanf("%d", &n);                                     //Accepting value from the user
    for ( int i = 1; i <= n; i++ ) {                     // using for loop to print first n numbers
        printf("%d  ", i);
    }
    return 0;
}