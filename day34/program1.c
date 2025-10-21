#include <stdio.h>
int main() {
    int n, i, x, pos;                                                  //Declaration
    printf("How many elements you want to add initially:\n");
    scanf("%d",  &n);                                                  //Accepting initials from the user 
    int a[n];                                                          //Declaration of the array variable
    printf("Enter the values one by one \n");
    for ( i = 0; i < n; i++ ) {
        scanf("%d", &a[i]);                                            //Accepting values from the user
    }
      printf("Enter the number you want to add\n ");
      scanf("%d", &x);
      printf("At what position\n");
      scanf("%d", &pos);
       for (int i=n; i>=pos; i--) {                                   //Positioning the array
        a[i] = a[i-1];
 }
 a[pos] = x; 
 printf("Final array:");                                              //Printing the final array 
 for( i = 0; i <= n; i++) {
    printf("%d ", a[i]);
 }
 return 0;
} 
