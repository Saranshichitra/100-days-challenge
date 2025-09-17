#include <stdio.h>

int main() {
    int sec, hrs, mins;                           //Declaration
                                                  // sec=seconds , hrs=Hours and mins=Minutes    
    printf("Enter time in seconds: \n ");
    scanf("%d", &sec);                            //Accepting Value from the user  
    hrs = sec / 3600;                             //Conversion of Seconds in HOurs
    sec = sec % 3600;
    mins = sec / 60;                              //Conversion of remaining Seconds in minutes
    sec = sec % 60;
    printf("%d:%d:%d\n", hrs, mins, sec);         //Output Statement
    return 0;
}