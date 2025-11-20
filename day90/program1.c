#include <stdio.h>
enum GENDER{MALE = 1, FEMALE};              //Declaration and initialization of enum 
int main() {
    enum GENDER g;                        //Declaration of enum variable
    printf("Gender=(1 FOR MALE, 2 FOR FEMALE)");  //Asking user about the gender
    scanf("%D", &g);            //Accepting gender
    switch(g) {                  //Using switch case to print accordingly  
        case MALE: printf("MALE"); break;
        case FEMALE: printf("FEMALE"); break;
        default: printf("Invalid choice");
    }
    return 0;
}