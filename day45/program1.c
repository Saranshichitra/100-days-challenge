#include <stdio.h>
int main() {
    char str[100];                               //Declaration
    char ch;                                     //Declaration 
    int i, frequency = 0;                        //Declaration and initialization          
    printf("Enter the string\n");                //Asking user to enter the string
    fgets(str, sizeof(str), stdin);              //Accepting string from the user
    printf("How's frequency you want:");      
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch){
             frequency++;
        }
    }
    printf("Frequency of %c is %d\n", ch, frequency);
    return 0;
}