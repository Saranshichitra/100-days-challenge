#include <stdio.h>
int main() {
    int n, k;                                                     //Declaration
    printf("Enter the number of elements in the array: ");        //Taking inpit from user
    scanf("%d", &n);
    int arr[n];                                                  //Declaration of array
    printf("Enter the elements one by one:\n");                  //Asking users to enter elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Which smallest element you want: ");
    scanf("%d", &k);
    for (int i = 0; i < n-1; i++) {                             //Sorting the array in ascending order
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("The %dth smallest element is: %d\n", k, arr[k-1]); //Output statement to print the kth smallest element in the array 

    return 0;
}
