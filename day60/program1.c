#include<stdio.h>
int main() {
    int n, i, j, x, max;                                         //Declaration and initialization
    printf("How many elements are there in your array\n");        //Taking input from the user  
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements one by one:\n");                   //Accepting values
    for(i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("How many numbers are to be bunched\n");                //Taking input from the user  
    scanf("%d", &x);
    for(i = 0;i <= n - x;i++) {                                   //Outer loop to check one number through the entire bunch
     max = arr[i];
     for(j = i + 1; j < i + x; j++) {                            //Inner loop for comparing
        if( arr[j] > max){
            max = arr[j];
        }
    }
    printf("%d ", max);                                         //Output statement to print the largest number of the group
}
return 0;
}
