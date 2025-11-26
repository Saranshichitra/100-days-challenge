#include <stdio.h>
int main() {
    int n, i, j, temp;     //Declaration
    printf("What is the size of array\n");
    scanf("%d", &n);  //Accepting value from the user
    int arr[n];   //Declaration
    printf("Enter numbers one by one\n");
    for(i=0;i<n;i++) {       //loop to accept values
        scanf("%d", &arr[i]);   //Accepting value from the user
    }
    for(i=0;i<n;i++){      //use of nested loop to find whether the number is repeated or not
        for(j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                temp = arr[j];
                printf("%d", arr[j]);   //printing the repeated number
                break;
            }
        }
    }
return 0;
}