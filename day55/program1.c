#include<stdio.h>
int main() {
    int n, i, x, k = 0, j, temp = -1;                                          //Declaration and initialization
    printf("How many elements are there in your array\n");        //Taking input from the user  
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements one by one:\n");                   //Accepting values
    for(i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }
    x = n/2;
    for (i = 0; i < n; i++){
        for( j = 0; j < n;j++) {
            if(arr[i] == arr[j]){
              k++;
              temp = j;
            }
        }
        if(k > x){
            break; 
    }
}
printf("%d", arr[temp]);                                    //Output statement
return 0;
}