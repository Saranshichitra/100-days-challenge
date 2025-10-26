#include <stdio.h>
int main() {
    int row1, column1, row2, column2, i, j, sum;                           //Declaration
    printf("How many rows and columns you need in first matrix\n");     
    scanf("%d %d", &row1, &column1);
    printf("How many rows and columns you need in second matrix\n");
    scanf("%d %d", &row2, &column2);
    int a1[row1][column1];                                                //Declaration of first array variable
    int a2[row2][column2];                                                //Declaration of second array variable
    printf("Enter the values for 1st matrix\n");
    for ( i = 0; i < row1; i++ ) {
        for ( j = 0; j < column1; j++ ) {
            scanf("%d", &a1[i][j]);                                     //Accepting 1st matrix values from the user
        }
    }
    printf("Enter the values for 2nd matrix\n");
    for ( i = 0; i < row2; i++ ) {
        for ( j = 0; j < column2; j++ ) {
            scanf("%d", &a2[i][j]);                                    //Accepting 2nd matrix values from the user
        }
    }
    if (( row1 == row2 ) && ( column1 == column2 )) {                  //Checking the condition to add two matrices  
        for ( i = 0; i < row1; i++ ) {
            for ( j = 0; j < column2; j++ ) {
                sum = a1[i][j] + a2[i][j];                             //Calculating the sum
                printf("%d ", sum);                                    //Printimg the sum 
            }
            printf("\n");                                             //Taking the cursor to the next line
        }
    }
    else {
        printf("Sum not possible");                            //Output statement if the condition does not persists 
    } 
    return 0;
}
