#include <stdio.h>
 enum Message { SUCCESS, FAILURE, TIMEOUT };             //Defining enumerations for traffic lights
 int main() {
    enum Message toprint;
    printf("How was your task(1 for success, 2 for failure , 3 for timeout\n");//Asking user about the light
    scanf("%d", &toprint); //Accepting colour of lights from user
switch(toprint){             //Using switch case to print the required message
 case 1: printf("Successfully completed the task\n", SUCCESS); break;
 case 2: printf("Failed to complete the task\n", FAILURE); break;
 case 3: printf("Timeout so couldnot complete the task\n", TIMEOUT); break;
 default : printf("Invalid option\n");
}
 return 0;
}