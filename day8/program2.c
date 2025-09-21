#include <stdio.h>
int main() {
    int n1, n2, n3;                                //Declaration
    printf("Enter 3 numbers \n");
    scanf("%d %d %d", &n1, &n2, &n3);               //Accepting value from user
                                                    //Checking the condition
    if ((n1 > n2) &&  (n1 > n3)) {
        printf("%d is the largest number", n1);
    } 
    if ((n2 > n3) &&  (n2 > n1)) {
        printf("%d is the largest number", n2);
    } 
    if ((n3 > n2) &&  (n3 > n1)) {
     printf("%d is the largest number", n3);
    }
    return 0;
}