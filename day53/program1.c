#include<stdio.h>
int main() {
    int n, i, leftsum = 0, rightsum = 0, totalsum = 0, k = -1;                                          //Declaration and initialization
    printf("How many elements are there in your array\n");        //Taking input from the user  
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements one by one:\n");                   //Accepting values
    for(i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0;i < n;i++) {
       totalsum = totalsum + arr[i];
    }
    for(i = 0;i < n;i++) {
        rightsum = totalsum - leftsum - arr[i];
        if(leftsum == rightsum) {
           k = i;
          break;
        }
        leftsum = leftsum + arr[i];
    }
    printf("%d", k);
    return 0;
}

