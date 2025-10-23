#include <stdio.h>
int main() {
    int n, i, x, pos;
    printf("How many elements you want to add initially:\n");
    scanf("%d",  &n);
    int a[n];
    printf("Enter the values one by one\n");
    for ( i = 0; i < n; i++ ) {
        scanf("%d", &a[i]);
    }
      printf("Enter the number you want to add:\n");
      scanf("%d", &x);
      printf("At what position\n");
      scanf("%d", &pos);
      pos = pos - 1;
       for (int i = n; i > pos; i--) {
        a[i] = a[i-1];
 }
 a[pos] = x; 
 printf("Final array:\n");
 for( i = 0; i <= n; i++) {
    printf("%d ", a[i]);
 }
 
 return 0;
} 

