#include <stdio.h>

int main() {
    int a, b;                                            //declaration 
    printf("Enter the numbers");                          
    scanf("%d %d", &a, &b);                             //accepting value from user  
                                                        //swaping the two numbers by addition and subtraction                                                       
    a = a + b;                                          //storing the sum of both numbers in the first variable             
    b = a - b;                                          //using that sum , now subtrating it by the other value and storing it in second variable
    a = a - b;                                          //now storing the difference of added and subtracted value in the first variable
    printf("After swap: %d %d\n", a, b);
    return 0;
}
