#include <stdio.h>
int main() {
    int n, i, rotate, j, temp;                                                   //Declaration
    printf("How many elements you want to add initially:\n");
    scanf("%d",  &n);                                                            //Accepting initials from the user 
    int a[n];                                                                    //Declaration of the array variable
    printf("Enter the values one by one\n");
    for ( i = 0; i < n; i++ ) {
        scanf("%d ", &a[i]);                                                    //Accepting values from the user
    }
    printf("By how many positions should the array rotate\n");
    scanf("%d", &rotate);
   //Nested loop to rotate the array multiple times.                                                            
    for ( i = 1 ; i <= rotate ; i++ ) {                                         //Outer loop to rotate one by one                   
         temp = a[0];  
        for ( j = 0 ; j < n-1 ; j++ ) {                                         //Inner loop to initialize the indices accordingly
           a[j] = a[j+1] ; 
        } 
        a[n-1] = temp;
       }
       printf("Final Array:\n");                                              //Printing the final array
       for( i = 0 ; i < n ; i++ ) {
        printf("%d ", a[i]);
       }
       return 0;
}