#include <stdio.h>
int main() {
    int i, j, rows, columns, sum = 0, k, temp, n = 0;                                //Declaration
    printf("How many rows you want\n");
    scanf("%d", &rows);                                              //Asking user the number of rows 
    printf("How many columns you want\n");
    scanf("%d", &columns);                                           //Asking user the number of columns
    int a[rows][columns]; 
    int b[rows][columns];
    temp = rows * columns;                                                 //Declaration of array
    printf("Enter the values filling it row wise i.e. left to right\n");
    for ( i = 0; i < rows; i++ ) {
        for ( j = 0; j < columns; j++ ) {
            scanf("%d", &a[i][j]);                                     //Accepting matrix values from the user
        }
    }
    printf("What should be the first element");
    scanf("%d", &k);
     for ( i = 0; i < rows; i++ ) {
        for ( j = 0; j < columns; j++ ) {
           b[i][j] = k;
           k++;                                     //Accepting matrix values from the user
        }
    }
    for ( i = 0; i < rows; i++ ) {
        for ( j = 0; j < columns; j++ ) {
            if ( a[i][j] == b[i][j] ) {
                n++;
            }
    }
}
    if ( n == temp ) {
        printf("True");
    }  
    else {
        printf("False");
    }
    return 0;
}