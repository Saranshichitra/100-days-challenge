#include<stdio.h>
int main() {
    int n, i;                                                     //Declaration and initialization
    printf("How many elements are there in your array\n");        //Taking input from the user  
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements one by one:\n");                   //Accepting values
    for(i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int sum = arr[0];
    for (int i = 1; i < n; i++) {                                //Finding the maximum sum                   
        if (sum + arr[i] > arr[i])
            sum = sum + arr[i];                                 //Storing the maximum sum in a temporary variable for further use
        else
            sum = arr[i];

        if (sum > max)
            max = sum;
    }

    printf("%d", max);                                             //Output statement to print the maximum sum
    return 0;
}
