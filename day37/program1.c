#include <stdio.h>
int main() {
    int i, j, rows, columns, sum;                                //Declaration
    printf("How many rows you want\n");
    scanf("%d", &rows);                                              //Asking user the number of rows 
    printf("How many columns you want\n");
    scanf("%d", &columns);                                           //Asking user the number of columns
    int a[rows][columns];  
    int add[rows];                                                   //Declaration of array
    printf("Enter the values filling it row wise i.e. left to right\n");
    for ( i = 0; i < rows; i++ ) {
        for ( j = 0; j < columns; j++ ) {
            scanf("%d", &a[i][j]);                                     //Accepting matrix values from the user
        }
    }
    for ( i = 0; i < rows; i++ ) {
        sum = 0;
        for ( j = 0; j < columns; j++ ) {
           sum = sum + a[i][j];                                         //Calculating the sum
        }
       add[i] = sum;
    }
    printf("Sum of each row of matrix is \n");  
    for ( i = 0; i < rows; i++ ) {
        printf("%d  ", add[i]);                                         //Output Statement to print the sum of each row
    }
    return 0;
}