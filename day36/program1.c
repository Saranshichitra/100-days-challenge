#include <stdio.h>
int main() {
    int i, j, rows, columns;                  //Declaration
    printf("How many rows you want\n");
    scanf("%d", &rows);                        //Asking user the number of rows 
    printf("How many columns you want\n");
    scanf("%d", &columns);                     //Asking user the number of columns
    int a[rows][columns];                      //Declaration of array
    printf("Enter the values filling it row wise i.e. left to right\n");
    for ( i = 0; i < rows; i++ ) {
        for ( j = 0; j < columns; j++ ) {
            scanf("%d", &a[i][j]);            //Accepting matrix values from the user
        }
    }
    printf("You entered:\n");
    for ( i = 0; i < rows; i++ ) {
        for ( j = 0; j < columns; j++ ) {
            printf("%d  ", a[i][j]);       //Printing the final matrix
        }
        printf("\n");                      //Taking the cursor to the next line
    }
    return 0;
}