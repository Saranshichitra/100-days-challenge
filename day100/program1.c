#include <stdio.h>
struct Student {                             //Declaration of structure
    char name[50];
    int id;
    int marks;
};
int main() {
    struct Student st;                     //Declaration of structure variable     
    struct Student *ptr;                   //Declaration of structure variable using pointer   
    ptr = &st;                             //Storing address
    scanf("%s %d %d", ptr->name, &ptr->id, &ptr->marks);       //Accepting values
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d",  ptr->name, ptr->id, ptr->marks);     //Output statement to print modified data
    return 0;
}
