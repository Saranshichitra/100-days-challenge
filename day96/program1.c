#include <stdio.h>
struct join {                              //Declaration of structure variable
    int date;
    int month;
    int year;
};
struct Employee {                        //Declaration of another structure variable(Nested structure)
    char name[50];
    int id;
    struct join joiningdate;
} emp;
int main() {                 
    printf("Enter the name:");           //Asking user to enter name
    scanf("%s", emp.name);               //Accepting name from user
    printf("Enter the id:");             //Asking user to enter id
    scanf("%d", &emp.id);                //Accepting id from user
    printf("Enter the date of joining(dd mm yyyy):");                   //Asking user to enter joining date       
    scanf("%d %d %d", &emp.joiningdate.date, &emp.joiningdate.month, &emp.joiningdate.year);                //Accepting joining date from user
    printf("Name=%s \nID=%d \nDate of Joining=%d/%d/%d", emp.name, emp.id, emp.joiningdate.date, emp.joiningdate.month, emp.joiningdate.year);             //Output statement to print desired output
    return 0;
}
