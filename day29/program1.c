#include <stdio.h>
int main() {
    int n, i, sum = 0;                                         //Declaration and Initialization
    printf("How many elements are to be stored\n");
    scanf("%d", &n);                                           //Accepting vale from the user 
    int a[n];                                                  //Declaration of array
    printf("Enter the values one by one\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);                                    //Accepting array elements from user using loop
    }
    for ( i = 0; i < n; i++) {
        sum = sum + a[i];                                      //Finding the sum of array elements that the user entered using loop 
    }
    printf("\n");                                              //Statement to bring the cursor to the next Line
    printf("Sum = %d", sum);                                   //Required Output Statement
return 0;
}