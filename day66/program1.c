#include <stdio.h>
int main() {
    int n, i, target, j;                   //Declaration
    scanf("%d", &n);                       //Accepting the size of array
    int arr[n];                            //Declaration of array variable
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);              //Accepting array elements one by one
    }
    scanf("%d", &target);                  //Accepting target 
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
           if((arr[i]+arr[j]) == target){  //Comparing the indices one by one from each variable and comparing it with target
            printf("%d %d", i, j);        //Printing the indices 
            break;
           }
        }
    }
    return 0;
}