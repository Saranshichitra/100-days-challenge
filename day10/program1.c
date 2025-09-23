#include <stdio.h>
int main() {
    float s1, s2, s3;                                           //Declaration
    printf("Enter the sides of the Triangle\n");
    scanf("%f %f %f", &s1, &s2, &s3);                           //Accepting value from the user
    if ((s1 == s2) && (s1 == s3)) {
        printf("It is an Equilateral Triangle\n");
}
else if ((s1 == s2) || (s2 == s3) || (s3 == s1)) {
    printf("It is an Isosceles Triangle\n");
}
else {
    printf("It is a Scalene Triangle\n");
}
return 0;
}