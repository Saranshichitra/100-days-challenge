#include <stdio.h>
int main() {
    int i, j, rows, columns, e = 0, s;                                //Declaration and initialization
    printf("How many rows you want\n");
    scanf("%d", &rows);                                              //Asking user the number of rows 
    printf("How many columns you want\n");
    scanf("%d", &columns);                                           //Asking user the number of columns
    int a[rows][columns];                                            //Declaration of array variable  
    int b[columns][rows];                                            //Declaration of array variable  
    s = rows + columns;                                        
    printf("Enter the values filling it row wise i.e. left to right\n");
    for ( i = 0; i < rows; i++ ) {
        for ( j = 0; j < columns; j++ ) {
            scanf("%d", &a[i][j]);                                     //Accepting matrix values from the user
        }
    }
    if ( rows == columns ) {
    for ( i = 0; i < columns; i++ ) {                                  //Outer loop for the Procesure to transpose the array
        for ( j = 0; j < rows; j++ ) {                                 //Inner loop
         b[i][j] = a[j][i];      
          }
        printf("\n");                                                 //Taking the cursor to the next line
    }
    for ( i = 0; i < rows; i++ ) {
        for ( j = 0; j < columns; j++ ) {
           if (a[i][j] == b[i][j])  {                               //Creating the transpose
                   e++;
           }
        }
    }
    if ( e == s ) {                                               
        printf("True");                                       //Output Statement if the condition persists  
    }
    else {
        printf("False");                                     //Output Statement if the condition does not persists  
    }
}
else {
    printf("Cannot check as rows are not equal to columns");
}
    return 0;
}                                  