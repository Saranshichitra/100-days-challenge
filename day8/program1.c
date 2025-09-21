#include <stdio.h>
#include <ctype.h>

int main() {
    char choice;                                            //Declaration
    printf("Enter your choice: \n");                 
    scanf("%c", &choice);                                   //Accepting value from the user
    if (isupper(choice)) {
        printf("Uppercase alphabet\n");
    } 
    else if (islower(choice)) {
        printf("Lowercase alphabet\n");
    } 
    else if (isdigit(choice)) {
        printf("Digit\n");
    } 
    else {
        printf("Special character\n");
    }

    return 0;
}