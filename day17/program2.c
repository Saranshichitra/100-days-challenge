#include <stdio.h>
int main() {
    int n, i, count=0;                               //Declaration and Initialization
    printf("Enter the  number\n");
    scanf("%d", &n);                                  //Accepting value from the user
    for ( i = 1; i <= n; i++ ) {
        if ( n % i == 0 ) {
            count++;
        }
    }
    if ( count == 2 )
{
    printf("Number is prime");                       //Output statement if the condition persists
}
else {
    printf("Number is not prime");                 //Output statement if the condition does not persists
}
return 0;
}