#include<stdio.h>
int main() {
    int n, i, leftsum = 0, rightsum = 0, totalsum = 0, k = -1;               //Declaration and initialization
    printf("Enter the number\n");                                            //Taking input from the user  
    scanf("%d", &n);
    totalsum = n * (n + 1)/2;                                                //Calculating total sum
    for(i = 0;i < n;i++) {
        rightsum = totalsum - leftsum - i;
        if(leftsum == rightsum) {
           k = i;
          break;
        }
        leftsum = leftsum + i;
    }
    printf("%d", k);                                                        //Output statement
    return 0;
}