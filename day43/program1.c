#include <stdio.h>

int main() {
    char str[100];                         //Declaration and initialization  
    int i, length = 0;                     //Declaration and initialization  
     printf("Enter the word\n");           //Asking user to enter the word
    scanf("%s", str);                      //Accepting word from the user  
    for (i = 0; str[i] != '\0'; i++) {     //using for loop to calculate the length of the word 
        if (str[i] == '\n') break;
        length++;
    }
    for (i = length - 1; i >= 0; i--) {     //for loop for printing the reversed word
        printf("%c", str[i]);               //Output statement to print the character staring from last accordingly 
    }
    return 0;
}
