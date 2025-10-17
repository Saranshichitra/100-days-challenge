#include <stdio.h>
int main() {
    int n, i, x, pos;
    printf("How many elements you want to add initially:\n");
    scanf("%d",  &n);
    int a[n];
    printf("Enter the values one by one");
    for ( i = 0; i < n; i++ ) {
        scanf("%d", &a[i]);
    }
      printf("Enter the number ypu want to add:/n");
      scanf("%d", &x);
      printf("At what position\n");
      scanf("%d", &pos);
       for (int i=n; i>=pos; i--) {
        a[i] = a[i-1];
 }
 a[pos-1] = x; 
 printf("Final array:");
 for( i = 0; i <= n; i++) {
    printf("%d", a[i]);
 }
 return 0;
} 
