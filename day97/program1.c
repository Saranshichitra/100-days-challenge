#include <stdio.h>
struct Employee {                        //Declaration of another structure variable(Nested structure)
    char name[50];
    int id;
    float salary;
} e1, e2;
int main() {
    FILE *fp;                 
    printf("Enter the name:");           //Asking user to enter name
    scanf("%s", e1.name);               //Accepting name from user
    printf("Enter the id:");             //Asking user to enter id
    scanf("%d", &e1.id);                //Accepting id from user
    printf("Enter the salary:");          //Asking user to enter salary       
    scanf("%f", &e1.salary);            //Accepting salary from user
    fp=fopen("emp.dat", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);
    printf("Employee details stored in file are\n");
    fp=fopen("emp.date", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);
    printf("Name=%s\nID=%d\nSalary=%.2f", e2.name, e2.id, e2.salary);
    return 0;
}
