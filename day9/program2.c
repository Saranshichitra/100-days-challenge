#include <stdio.h>
int main() {
    int percentage;                                               //Declaration
    printf("Enter your percentage \n");
    scanf("%d", &percentage);                                     //Accepting value from user 
    if ((percentage >= 90) && (percentage <= 100)) {
        printf("Grade A");
    } 
    if ((percentage >= 80) && (percentage <= 89)) {
        printf("Grade B");
    } 
    if ((percentage >= 70) && (percentage <= 79)) {
        printf("Grade C");
    } 
    if ((percentage >= 60) && (percentage <= 69)) {
        printf("Grade D");
    } 
    if (percentage <= 60) {
        printf("Grade F");
    } 
    return 0;
}