#include <stdio.h>
int main () {
    int m ,n, i, j;                                                          //Declaration
    printf("How many elements you want to enter in the first array");        
    scanf("%d", &m);                                                         //Accepting value from the user
    printf("How many elements you want to enter in the second array");
    scanf("%d", &n);                                                         //Accepting value from the user 
    int s = m + n;
   int a[m];
    int b[n];
    int total[s];
    printf("Enter the elements of first array\n");
    for (i = 0;i < m; i++) {
        scanf("%d", &a[i]);                                                  //Accepting value from the user in first array     
    }
    printf("Enter the elements of second array\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);                                                 //Accepting value from the user in second array  
    }
    for (i = 0; i < m; i++) {                                               //Logic for Merging
        total[i] = a[i];
    }
    for(j = 0; j < (s-m); j++) {
        total[i+j] = b[j];
        }
        printf("Array after merging\n");
        for (i = 0; i < s; i++) {
            printf("%d ", total[i]);                                    //Output statement to print the final array
        }
     return 0;
}