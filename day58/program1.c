#include<stdio.h>
int main() {
    int n, i, j, found = 1;                                          //Declaration and initialization
    printf("How many elements are there in your array\n");        //Taking input from the user  
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements one by one:\n");                   //Accepting values
    for(i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        found = -1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] < arr[j]){
               found = arr[j];
               break;
            }
        }
            printf("%d  ", found);                           //Output statement
        }
    return 0;
}
