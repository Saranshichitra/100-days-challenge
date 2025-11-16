#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];                                  //Declaration
    int i;                                          //Declaration
    printf("Enter the string\n");                   //Asking user to enter the string
    fgets(str, sizeof(str), stdin);                 //Accepting string from the user
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {       //Checking whether character is in upper case   
            str[i] = tolower(str[i]);               //Converting upper case to lower case 
        } 
        else if (str[i] >= 'a' && str[i] <= 'z') {  //Checking whether character is in lower case   
            str[i] = toupper(str[i]);               //Converting lower case to upper case 
        }
    }
    printf("%s", str);                               //Output statement to print the desired output
    return 0;
}
