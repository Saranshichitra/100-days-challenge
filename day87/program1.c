#include<stdio.h>
enum DESIGNATION {ADMIN = 1, USER, GUEST};      //Declaration of enumeration
int main(){
   enum DESIGNATION desg;                       //Declarting enum variable  
   printf("Who are u(ADMIN = 1, USER, GUEST)\n");  //Asking user about their designation
   scanf("%d" ,&desg); //Accepting designation
   switch(desg) {                  //Using switch to print message accordingly
    case 1: printf("Welcome Admin!!"); break;
    case 2: printf("Welcome User!!"); break;
    case 3: printf("Welcome Guest!!"); break;
    default: printf("Invalid choice!"); break;
   }
   return 0;
}