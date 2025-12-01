#include<stdio.h>
int main() {
    int n, i, x, sum = 0, maxsum;                                 //Declaration and initialization
    printf("How many elements are there in your array\n");        //Taking input from the user  
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements one by one:\n");                   //Accepting values
    for(i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
     printf("How many numbers are to be bunched");                //Taking input from the user  
    scanf("%d", &x);
    maxsum = sum;                                               //maxsum is used as a temporary variable
    for(i = x;i < n;i++) {
        sum = sum + arr[i] - arr[i - x]; 
        if(sum > maxsum){
           maxsum = sum;
        }
    }
        printf("%d", maxsum);                                 //Output statement
    return 0;
}