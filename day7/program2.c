#include <stdio.h>
int main() {
    char ch;                                                                                 //Declaration
    printf("Enter the alphabet\n");
    scanf("%c \n", &ch);                                                                        //Accepting value from the user
    if( (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') ) {          //Checking whether alphabet is a vowel or a consonant    
        printf("%c is a vowel", ch);
    } 
    else {
       printf("%c is a consonant", ch);   
    }
    return 0;
}