#include <stdio.h>
int main() {
   int n, i, os=0, es, m;              //Declaration
   printf("Enter the size of array\n");
   scanf("%d", &n);    //Accepting value
   int arr[n];         //Declaration
   printf("Enter the values\n");
   for(i=0;i<n;i++){
    scanf("%d", &arr[i]); //Accepting values
   }
   es = n * (n+1)/2;    //Expected sum
   for(i=0;i<n;i++){
    os = os + arr[i];  //Original sum
   }
  m=es-os;  //missing number
  printf("%d", m);  //output statement to print the missing number
return 0;
}
