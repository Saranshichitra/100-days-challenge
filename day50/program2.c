#include <stdio.h>
#include <string.h>
int main() {
    char str[100];         //Declaration  
    int i, j, k;          //Declaration
    printf("Enter the string\n");                  //Asking user to enter the string
    scanf("%s", str);                               //Accepting string from user   
    int len = strlen(str);        //Calculating length of string
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            for (k = i; k <= j; k++) {          //Combining strings as per requirement
                printf("%c", str[k]);
            }
            printf(",");
        }
    }
      return 0;
}
  

