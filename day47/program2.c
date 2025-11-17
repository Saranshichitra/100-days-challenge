#include <stdio.h>
#include <string.h>
int main() {
    char str[200];                                            //Declaration
    char longestword[100] = "";                               //Declaration and initialization  
    char tempcheck[50];                                       //Declaration 
    int i = 0, j = 0;                                         //Declaration and initialiazation
    printf("Enter a sentence:\n");                            //Asking user to enter the sentence
    fgets(str, sizeof(str), stdin);                           //Accepting sentence from the user
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            tempcheck[j++] = str[i];                           //Temporary check of size of word after each space  
        } else {
            tempcheck[j] = '\0';
            if (strlen(tempcheck) > strlen(longestword)) {
                strcpy(longestword, tempcheck);
            }
            j = 0;
        }
        i++;
    }
    tempcheck[j] = '\0';  
    if (strlen(tempcheck) > strlen(longestword)) {
        strcpy(longestword, tempcheck);
    }
    printf("%s\n", longestword);                                //Output statement to print the longest word
    return 0;
}
