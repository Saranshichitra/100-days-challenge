#include <stdio.h>
int main() {
    int year;                                                                  //Declaration
    printf("Enter the year\n");
    scanf("%d", &year);                                                        //Accepting value from the user
    if((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year", year);
    }
    else {
        printf("%d is not a leap year", year);
    }
return 0;
}