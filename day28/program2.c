#include <stdio.h>
int main() {
    int n, i;                                                //Declaration
    printf("How many elements are to be stored\n");
    scanf("%d", &n);                                         //Accepting value from the user 
    int a[n];                                                //Declaration of array
    printf("Enter the values one by one");               
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);                                  //Accepting array elements from user using loop
    }
    for ( i = 0; i < n; i++) {
        printf("%d  ", a[i]);                                //Printing the array elements that the user entered using loop    
    }
return 0;
}