#include <stdio.h>
int main() {
    char str[100];                                                     //Declaration
    int i, j = 0, found =0;                                                      //Declaration and initialization  
    printf("Enter the string\n");                                      //Asking user to enter the string
    fgets(str, sizeof(str), stdin);                                    //Accepting string from the user
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') 
        break; 
        if( str[i]>='a' && str[i]<='z'){
            for (j = i + 1; str[j] != '\0'; j++) {
            if (str[j] == '\n') break;
            if (str[i] == str[j]) {
                printf("%c\n", str[i]);
                found =1;
                break;
              }
        }
     }
     if(found == 1) break;
    }
    return 0;
    }