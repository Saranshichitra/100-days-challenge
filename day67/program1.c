#include <stdio.h>
int main() {
    int i, j, k, m, n;                                   //Declaration
    printf("Enter the size of first array\n");
    scanf("%d", &m);             //Accepting size of first array              
    printf("Enter the size of second array\n");
    scanf("%d", &n);             //Accepting size of second array
    int arr1[m], arr2[n], merge[m+n];  //Declaration of array variables
    printf("Enter the values of first array\n");
    for(i=0;i<m;i++){
        scanf("%d", &arr1[i]);        //Accepting array elements of first variable
    }
    printf("Enter the values of second array\n");
    for(i=0;i<n;i++){
        scanf("%d", &arr2[i]);        //Accepting array elements of second variable           
    }
    i=0, j=0, k=0;
    for(;i<m && j<n;k++){             //Merging the elements 
        if( arr1[i]<arr2[j]){
            merge[k]=arr1[i++];
        }
        else{
            merge[k]=arr2[j++];
        }
    }
    for(;i<m;i++, k++){              //loop to copy leftover elements of array 1        
        merge[k] = arr1[i];
    }
    for(;j<n;j++, k++){             //loop to copy leftover elements of array 2
        merge[k] = arr2[j];
    }
for(i=0;i<(m+n);i++){              //loop to print the merged array
    printf("%d  ", merge[i]);      //output statement to print the merged array
}
return 0;
}