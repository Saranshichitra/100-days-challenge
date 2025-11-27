#include <stdio.h>
#include <string.h>
int main() {
    char str1[200], str2[200];                       //Declaration            
    scanf("%s", str1);                               //Accepting first string
    scanf("%s", str2);                               //Accepting second string
    if (strlen(str1) != strlen(str2)) {              //Comparing length
        printf("Not rotation");
    }
    char str3[400];
    strcpy(str3, str1);
    strcat(str3, str1);
    if (strstr(str3, str2) != NULL)                  
        printf("Rotation");                           //Output statement if condition persists   
    else
        printf("Not Rotation");                       //Output statement if condition does not persists
    return 0;
}
