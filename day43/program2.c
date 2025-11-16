#include <stdio.h>
int main() {
    char str[100];                           //Declaration and initialization  
    int i, len = 0, flag = 1;                //Declaration and initialization  
    printf("Enter the word\n");              //Asking user to enter the word
    scanf("%s", str);                        //Accepting word from the user  
    for (i = 0; str[i] != '\0'; i++) {       //using for loop to calculate the length of the word 
        if (str[i] == '\n') break;
        len++;
    }
    for (i = 0; i < len / 2; i++) {          //using for loop to check whether the word is palindrome or not
        if (str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1)                          
        printf("Palindrome");             //Output statement if the condition is true
    else
        printf("Not palindrome");         //Output statement if the condition is false
    return 0;
}
