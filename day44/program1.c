#include <stdio.h>
int main() {
    char str[100];                                //Declaration and initialization 
    int i;                                        //Declaration          
    int spaces = 0, digits = 0, special = 0;      //Declaration and initialization 
    printf("Enter the string\n");                  //Asking user to enter the string
    fgets(str, sizeof(str), stdin);                //Accepting string from the user  
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')  
            break;
        if (str[i] >= '0' && str[i] <= '9') {       //checking whether the character is a digit
            digits++;
        } else if (str[i] == ' ') {                 //checking whether the character is a whitespace
            spaces++; 
        } else {                                    //or else a special character
            special++;                       
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);       //Output statement to print the number of spaces digits and special characters
    return 0;
}
