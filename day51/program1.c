#include<stdio.h>
int main() {
    int n, i, target, first=-1, last=-1;                          //Declaration and initialization
    printf("How many elements are there in your array\n");          //Taking input from the user  
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements one by one:\n");                   //Accepting values
    for(i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("Which number you want to find:\n");                    //Finding target
    scanf("%d", &target);
    for(i = 0;i < n;i++) {                                       //Finding the first occurence
        if(arr[i] == target){
        first = i;
        break;
        }
    }
    for(i = n-1;i >= 0;i--) {                                   //Finding the last occurence
        if(arr[i] == target){
        last = i;
        break;
        }
    }
    printf("%d %d", first, last);                             //Output statement
   return 0;
} 