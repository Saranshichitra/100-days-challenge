#include<stdio.h>
int main() {
    char str[100];
    int i, k;
    printf("Enter the string\n");                                       //Asking user to enter the string
    fgets(str, sizeof(str), stdin);                                     //Accepting string from the user
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' '){                                             //Finding the space
            k = i+1;                                                    //k is the temporaray variable to store the very next index after the space
        } 
}
for (i = k; str[i] != '\0'; i++){                                    
    printf("%c", str[i]);                                                //Output statement to print the last name   
}
return 0;
}
