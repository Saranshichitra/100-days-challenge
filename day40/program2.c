#include <stdio.h>
int main() {
    int row1, column1, row2, column2;              //Declaration
    scanf("%d %d", &row1, &column1);               //Accepting no. of rows and columns for the first matrix     
    int arr1[row1][column1];                       //Declaration
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column1; j++) {
            scanf("%d", &arr1[i][j]);             //Accepting values for the first matrix
        }
    }
    scanf("%d %d", &row2, &column2);               //Accepting no. of rows and columns for the second matrix     
    int arr2[row2][column2];                       //Declaration
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < column2; j++) {
            scanf("%d", &arr2[i][j]);             //Accepting values for the second matrix  
        }
    }
    if (column1 != row2) {                     //Checking as per rules whether matrix multiplication is possible
        printf("Matrix multiplication not possible\n");
    }
   int arr3[row1][column2];
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < column2; j++) {
            arr3[i][j] = 0;          //Initially initializating each element of third array by 0
             }
            }
    for (int i = 0; i < row1; i++) {                
        for (int j = 0; j < column2; j++) {
            for (int k = 0; k < column1; k++) {
                arr3[i][j] += arr1[i][k]  * arr2[k][j]; //Multiplying the values as per rules
            }
        }
    }
    for (int i = 0; i < row1; i++) {            //loop to print the required output
        for (int j = 0; j < column2; j++) {
            printf("%d ", arr3[i][j]);         //Output statement
        }
        printf("\n");             //Output statement to bring the cursor to the next line
    }
    return 0;
}

