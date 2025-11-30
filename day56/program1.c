#include <stdio.h>

int main() {
    int n, i, p = 1, s = 1;
    printf("How many elements are there in your array\n");        //Taking input from the user  
    scanf("%d", &n);
    int arr[n];
    int ans[n];
    printf("Enter the elements one by one:\n");                   //Accepting values
    for(i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        ans[i] = p;  
        p *= arr[i];   
    } 
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= s;  
        s *= arr[i];    
    }
    for (int i = 0; i < n; i++) {
        printf("%d", ans[i]);
        if (i != n - 1)
         printf(",");  
    }
    return 0;
}
