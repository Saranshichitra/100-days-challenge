#include <stdio.h>
int pow(int a, int b) {                                                        //Creating function(just to avoid implicit conversion)
    int res = 1;
    for ( int i = 0; i < b; i++ ) {
        res = res * a;
    }
    return res;
}
int main() {
    int num, r, n = 0, tempnum1, result, sum = 0, tempnum2;                   //Declaration and Initialization
    printf("Enter the number:\n");
    scanf("%d", &num);                                                        //Accepting value from the user
    tempnum1 = num;
    tempnum2 = num;
    while ( num != 0 ) {
        r = num % 10;
        n++;
        num = num / 10;  
    }
    while ( tempnum1 != 0) {
         r = tempnum1 % 10;
         result = pow(r, n);
         sum = sum + result;
         tempnum1 = tempnum1 / 10; 
    }
     if ( tempnum2 == sum ) {
        printf("%d is an armstrong number", tempnum2);                         //Output statement if the condition persists 
         }
         else {
            printf("%d is not an armstrong number", tempnum2);                //Output statement if the condition does not persists
         }
         return 0;
}