#include<stdio.h>
int main() {
    float a,b,c;                                                    //declaration
    printf("Enter the numbers:");                              //accepting value from the user
    scanf("%f  %f", &a, &b);
    c=a;                                                            //swaping the values
    a=b;
    b=c;
    printf("values after swap are:%f %f\n", a, b);                  //output statement
}