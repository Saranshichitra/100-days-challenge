#include <stdio.h>
int main() {
    int n, i, num, result = 0, j;
    printf("How many elements are to be stored\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the values one by one\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be found:\n");
    scanf("%d", &num);
    for ( i = 0; i < num; i++ ) {
        if ( num == a[i] ) {
            j = i;
           result++;
        }
        else {
            continue;
        }
    }
    if ( result == 1) {
        printf("Found at index %d", j);
    }
    else { 
        printf("not present");
    }
    return 0;
}