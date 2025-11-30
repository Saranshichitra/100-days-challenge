#include<stdio.h>
int main() {
    int n, i, x, k = -1;                                          //Declaration and initialization
    printf("How many elements are there in your array\n");        //Taking input from the user  
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements one by one:\n");                   //Accepting values
    for(i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("Write the value of x\n");                            //Accepting value of x
    scanf("%d", &x);
    for(i = 0;i < n;i++) {
        if( arr[i] > x) {                                         //Finding the smallest number greater than x
            k = i;
             break;
        }
    }
    printf("%d", k);                                             //Output statement
    return 0;
}     
