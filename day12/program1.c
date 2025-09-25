#include <stdio.h>
int main() {
    int n, fine;                                                        //Initialization
    printf("Enter the number of days you are late: \n");
    scanf("%d", &n);                                                    //Accepting value from the user
    if ( n <= 0 ) {
        printf("No fine to be paid");
    }
    else if ( n <= 5 ) {                                                 //For day 1 to 5  
        fine =  n * 2;  
        printf("Fine to be paid for %d days is: %d\n", n, fine);

    }
    else if ( n <= 10) {                                                 //For day 6 to 10   
        fine =  (5 * 2) + (n - 5) * 4;  
        printf("Fine to be paid for %d days is: %d\n", n, fine);
    }
    else if ( n <= 30 ) {                                                //For 11 to 30
        fine =  (5 * 2) + (5 * 4) + ( n - 10 ) * 6;  
        printf("Fine to be paid for %d days is: %d\n", n, fine);
    } 
    else {                                                              //For days more than 30                
        printf("Membership cancelled");
    }
    return 0;
}