#include<stdio.h>

int main() {
    float length,breadth,area,perimeter;
    printf("enter the length");
    scanf("%f", &length);
    printf("enter the breadth:");
    scanf("%f", &breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("area of rectangle is:%f", area);
    printf("perimeter of rectangle is:%f", perimeter);
    return 0;
}