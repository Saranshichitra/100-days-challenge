#include <stdio.h>
int main() {
    int n, i, x, pos;                                                            //Declaration
    printf("How many elements you want to add initially:\n");
    scanf("%d",  &n);                                                            //Accepting initials from the user 
    int a[n];                                                                    //Declaration of the array variable
    printf("Enter the values one by one\n");
    for ( i = 0; i < n; i++ ) {
        scanf("%d", &a[i]);                                                      //Accepting values from the user
    }
      printf("Enter the index whose elment you want to delete:\n");
      scanf("%d", &pos);
       for (int i=pos; i<n; i++) {                                               //Positioning the array accordingly
        a[i] = a[i+1];
 }
 printf("Final array:\n");
 for( i = 0; i < n-1; i++) {
    printf("%d  ", a[i]);                                                       //Printing the final array
 }
 return 0;
} 
