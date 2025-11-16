#include <stdio.h>
int main() {
    char str[100];                           //Declaration and initialization
    int count = 0;                           //Declaration and initialization
    printf("Enter the word:\n");             //Asking user to enter the word
    scanf("%c", &str);                       //Accepting word from user
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')  
            break;
        count++;                              //Counting the number of alphabets   
    }
    printf("%d", count);                      //Printing the total number of alphabets in the word
    return 0;
}
