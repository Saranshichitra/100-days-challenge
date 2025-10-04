#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, middlePart, result;                      //Declaration
    printf("Enter the number:\n");
    scanf("%d", &num);                                                               //Accepting value from the user
    digits = (int)log10(num);
    firstDigit = num / (int)pow(10, digits);                                        //Converting last digit as first one
    lastDigit = num % 10;                                                           //Converting first value as last
    if (digits == 0) {
        printf("%d\n", num);
        return 0;
    }
    middlePart = num % (int)pow(10, digits);                                         //Swaping first and last digit
    middlePart = middlePart / 10;
    result = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;
    printf("Number after swap= %d\n", result);
    return 0;
}

