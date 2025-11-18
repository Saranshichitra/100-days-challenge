#include <stdio.h>
 enum Traffic { RED=1, YELLOW, GREEN };             //Defining enumerations for traffic lights
 int main() {
    enum Traffic light;
    printf("Which light is appearing (1 for red 2 for yellow 3 for green)\n");//Asking user about the light
    scanf("%d", &light); //Accepting colour of lights from user
switch(light){             //Using switch case to print the required message
 case 1: printf("Stop\n"); break;
 case 2: printf("Wait\n"); break;
 case 3: printf("Go!\n"); break;
 default : printf("Invalid option\n");
}
 return 0;
}