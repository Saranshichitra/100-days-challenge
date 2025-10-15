#include <stdio.h>
int main() {
    int n, i, temp;
    printf("How many elements are to be stored\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the values one by one\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for ( i = n - 1; i >= 0; i--) {
       printf("%d ", a[i]);
    }
    return 0;
}