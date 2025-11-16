#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];                                    //Declaration and initialisation
    printf("Enter the word\n");                       //Asking user to enter the word
    scanf("%s", str);                                 //Accepting word from the user   
    for (int i = 0; str[i] != '\0'; i++) {            //using for loop to convert each character to upper case one by one     
        str[i] = toupper(str[i]);                     // convert each character to uppercase
    }
    printf("%s", str);                                //Output statement to print the entire word in upper case
    return 0;
}