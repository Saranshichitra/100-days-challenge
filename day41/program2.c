#include <stdio.h>
int main() {
    char str[100];                                        //Declaration and initialisation
    printf("Enter the word:\n");                          //Asking user to enter the word
    scanf("%c", &str);                                    //Accepting word from the user
    for (int i = 0; str[i] != '\0'; i++) {
       if (str[i] == '\n')  
            break;
        printf("%c\n", str[i]);                           //Printing the alphabet
    }
    return 0;
}