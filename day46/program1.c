#include <stdio.h>
int main() {
    char str1[100], str2[100];                                                     //Declaration
    int i, j = 0;                                                                  //Declaration and initialization  
    printf("Enter the string\n");                                                  //Asking user to enter the string
    fgets(str1, sizeof(str1), stdin);                                              //Accepting string from the user
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == '\n') 
        break; 
        if (str1[i] != 'a' && str1[i] != 'e' && str1[i] != 'i' && str1[i] != 'o' && str1[i] != 'u' &&
            str1[i] != 'A' && str1[i] != 'E' && str1[i] != 'I' && str1[i] != 'O' && str1[i] != 'U') {
            str2[j++] = str1[i];  
        }
    }
    str2[j]='\0';
    printf("%s", str2);                                                            //Output statement to print the desired output
    return 0;
}
