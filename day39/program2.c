#include <stdio.h>
int main() {
    int i, j, rows, columns, sum = 0;                                //Declaration
    printf("How many rows you want\n");
    scanf("%d", &rows);                                              //Asking user the number of rows 
    printf("How many columns you want\n");
    scanf("%d", &columns);                                           //Asking user the number of columns
    int a[rows][columns];                                            //Declaration of array
    printf("Enter the values filling it row wise i.e. left to right\n");
    for ( i = 0; i < rows; i++ ) {
        for ( j = 0; j < columns; j++ ) {
            scanf("%d", &a[i][j]);                                     //Accepting matrix values from the user
        }
    }
    if ( rows == columns ) {
    for ( i = 0 , j = 0; i < rows , j < rows; i++ , j++ ) {
       
           sum = sum + a[i][j];                                         //Calculating the sum
        }
    }
    printf("Sum of all elements of matrix is %d \n", sum);              //Printing the total sum
    return 0;
}