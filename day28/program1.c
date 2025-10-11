#include <stdio.h>
int main() {
    int n, i, j, count=0;                               //Declaration and Initialization
    printf("Enter the  number\n");
    scanf("%d", &n);                                    //Accepting value from the user
    for ( j = 1; j <= n; j++ ) {                        //Outer loop       
    for ( i = 1; i <= j; i++ ) {                        //Inner loop
        if ( n % i == 0 ) {
            count++;
        }
    }
    if ( count == 2 )
{
    printf("%d ", j);                                 //Output statement if the condition persists
}
    }
return 0;
}