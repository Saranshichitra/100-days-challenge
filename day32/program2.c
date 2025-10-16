#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, frequency[10] = {0}, digit, maxCount = 0, result = 0;             //Declaration and Initialization
    printf("Enter the number:\n");
    scanf("%d", &num);                                                         //Accepting value from the user
    if (num == 0) {
        printf("You entered zero");
    }
     while (num > 0) {
        digit = num % 10;
        frequency[digit]++;
        num = num/ 10;
    }
    for (int i = 0; i < 10; i++) {
        if (frequency[i] >= maxCount) {
            maxCount = frequency[i];
            result = i;
        }
    }
    printf("Number most frequently occurred is: %d", result);
    return 0;
}
