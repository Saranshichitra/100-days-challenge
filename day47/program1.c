#include<stdio.h>
#include <string.h>
int main() {
    char str1[100];                         //Declaration and initialization  
    char str2[100];                         //Declaration and initialization  
    char str3[100];                         //Declaration and initialization  
    int i, j, len1, len2;                     //Declaration and initialization  
     printf("Enter the first word\n");           //Asking user to enter the word
    scanf("%s", str1);                      //Accepting word from the user  
     printf("Enter the second word\n");           //Asking user to enter the word
    scanf("%s", str2);                      //Accepting word from the user 
    len1 = strlen(str1);  
    len2 = strlen(str2);
    printf("%d %d", len1, len2);
    if ( len1 != len2 ){
        printf("Not anagrams\n");
    }
    else {
        for (i = 0; str1[i] != '\0'; i++) {
            for (j = 0; str2[j] != '\0'; j++) {
                if(str1[i] == str2[j]) {
                    str3[i] == str2[j]; 
                }
            }
        }
    }
    printf("%c", str3);
    if (strcmp(str1, str3) == 0){
        printf("Anagrams");
     }
     else {
        printf("Not anagrams");
     }
     return 0;
}