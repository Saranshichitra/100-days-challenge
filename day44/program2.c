#include <stdio.h>
int main() {
    char str[100];                                //Declaration and initialization 
    int i;                                        //Declaration          
    int spaces = 0, digits = 0, special = 0;      //Declaration and initialization 
    printf("Enter the string\n");                  //Asking user to enter the string
    fgets(str, sizeof(str), stdin);                //Accepting string from the user
    for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == ' ')
    printf("#");
    else
    printf("%c", str[i]);
    }
return 0;
}