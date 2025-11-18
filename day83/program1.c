#include <stdio.h>
 enum Months { JANUARY=1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER,  DECEMBER };             //Defining enumerations for traffic lights
 int main() {
    enum Months noofdays;
    printf("Which month ");//Asking user about the month number
    scanf("%D", &noofdays); //Accepting the month number from user
switch(noofdays){             //Using switch case to print the required message
 case 1: printf("January=31days\n", JANUARY); break;
 case 2: printf("February=28days\n", FEBRUARY); break;
 case 3: printf("March=31days\n", MARCH); break;
 case 4: printf("April=30days\n", APRIL); break;
 case 5: printf("May=31days\n", MAY); break;
 case 6: printf("June=30days\n", JUNE); break;
 case 7: printf("July=31days\n", JULY); break;
 case 8: printf("August=31days\n", AUGUST); break;
 case 9: printf("September=30days\n", SEPTEMBER); break;
 case 10: printf("October=31days\n", OCTOBER); break;
 case 11: printf("November=30days\n", NOVEMBER); break;
 case 12: printf("December=31days\n", DECEMBER); break;
 default : printf("Invalid option\n");
}
 return 0;
}