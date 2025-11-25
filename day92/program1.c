#include <stdio.h>
struct Student {                      //Defining the structure
    char name[50];
    int rollno;
    float marks;
};
int main() {
    struct Student s[5];                                              //declaration of structure variable
    int i;
    for(i=0;i<5;i++){                                                 //for loop to accept details one by one  
    printf("Enter name\n");                                           //Asking user to enter name
    scanf("%s", s[i].name);                                           //Accepting name from the user  
    printf("Enter roll no\n");                                        //Asking user to enter roll number
    scanf("%d", &s[i].rollno);                                        //Accepting roll number from user 
    printf("Enter marks\n");                                          //Asking user to enter marks
    scanf("%f", &s[i].marks);                                         //Accepting marks from user
    }  
    printf("Name       Roll no.        Marks");
    printf("\n");
    for(i=0;i<5;i++){                                                 //for loop to print details one by one                        
    printf("%s         %d             %.2f \n", s[i].name, s[i].rollno, s[i].marks);    //Output statement to print the desired output
    }
    return 0;
}