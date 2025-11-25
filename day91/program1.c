#include <stdio.h>
struct Student {                      //Defining the structure
    char name[50];
    int rollno;
    float marks;
};
int main() {
    struct Student s;                                                 //declaration of structure variable
    printf("Enter name\n");                                           //Asking user to enter name
    scanf("%s", s.name);                                              //Accepting name from the user  
    printf("Enter roll no\n");                                        //Asking user to enter roll number
    scanf("%d", &s.rollno);                                           //Accepting roll number from user 
    printf("Enter marks\n");                                          //Asking user to enter marks
    scanf("%f", &s.marks);                                            //Accepting marks from user
    printf("Name=%s  Roll number=%d  Marks=%.2f", s.name, s.rollno, s.marks);    //Output statement to print the desired output
    return 0;
}