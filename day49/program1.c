#include<stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter the string\n");                                                  //Asking user to enter the string
    fgets(str, sizeof(str), stdin);                                              //Accepting string from the user
    printf("%c.", str[0]);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' '){
            printf("%c.", str[i+1]);
        } 
}
return 0;
}
