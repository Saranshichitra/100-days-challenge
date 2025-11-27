#include <stdio.h>
int main() {
    int rows, columns;                                     //Declaration
    scanf("%d %d", &rows, &columns);                       //Accepting number of rows and columns
    int a[rows][columns];                                  //Declaration
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            scanf("%d", &a[i][j]);                       //Accepting elements one by one
        }
    }
    for (int k = 0; k < rows + columns - 1; k++) {       //loop to pick the elements of diagonal transversal  
        for (int i = 0; i <= k; i++) {
            int j = k - i;
            if (i < rows && j < columns){
                printf("%d ", a[i][j]);         //printing the required element
            }
        }
    }
    return 0;
}
