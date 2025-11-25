#include <stdio.h>
struct Student {                      //Defining the structure
    char name[50];
    int rollno;
    float marks;
};
int main() {
    int n, i, j;                                                       //Declaration
    float temp;                                                        //Declaration  
    printf("How many students are there\n");                           //Asking user number of students 
    scanf("%d", &n);                                                   //Accepting value   
    struct Student s[n];                                              //declaration of structure variable
    for(i=0;i<n;i++){                                                 //for loop to accept details one by one  
    printf("Enter name\n");                                           //Asking user to enter name
    scanf("%s", s[i].name);                                           //Accepting name from the user  
    printf("Enter roll no\n");                                        //Asking user to enter roll number
    scanf("%d", &s[i].rollno);                                        //Accepting roll number from user 
    printf("Enter marks\n");                                          //Asking user to enter marks
    scanf("%f", &s[i].marks);                                         //Accepting marks from user
    }  
    temp=s[1].marks;
    j=1;
    for(i=0;i<5;i++){                                                 //to find highest marks                       
        if(temp<s[i].marks){
            temp=s[i].marks;
            j=i;
        }
    }
    printf("Topper = %s Marks(%.2f)", s[j].name, s[j].marks);
    return 0;
}