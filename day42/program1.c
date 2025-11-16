#include <stdio.h>
#include <ctype.h>
int main() {
    char ch[100];                                         //Declaration and initialization
    int v = 0, cns = 0;                                   //Declaration and initialization  
    printf("Enter the string: ");                         //Asking user to enter the word
    scanf("%s", ch);                                      //Accepting word from the user
    for (int i = 0; ch[i] != '\0'; i++) {                 //using for loop to check each alphabet one by one
        ch[i] = toupper(ch[i]);                          // convert to uppercase
        if (ch[i] >= 'A' && ch[i] <= 'Z') {              // check only alphabets
            if (ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')//checking whether character is a vowel
                v++;                                       //Counting vowels
            else                                            //constants check
                cns++;                                      //Counting consonants  
        }
    }
    printf("Uppercase String: %s\n", ch);                //Output statement to print the entire word in upper case
    printf("Vowels = %d\n", v);                          //Output statement to print the number of vowels in the word
    printf("Consonants = %d\n", cns);                    //Outputr stayement to print the number of consonants in the word
    return 0;
}
