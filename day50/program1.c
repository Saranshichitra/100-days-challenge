#include<stdio.h>
#include<string.h>
int main() {
    char date[50];         //Declaration
    int i;                 //Declaration
    printf("Enter the date in the format(dd/04/yyyy)");        //Asking user to enter the date
    scanf("%s", date);             //Accepting date from user
    for (i = 0; date[i] != '\0'; i++) {
        if(date[i] == '/'){
            date[i] = '-';              //Replacing slash to hyphen
        }
    }
    for (i = strlen(date); i >= 5; i--) {
        date[i+1] = date[i];            //Shifting to add month in words 
    }
        date[3] = 'A';
        date[4] = 'p';
        date[5] = 'r';
        printf("%s", date);       //Output statement to print the final output
        return 0;
}