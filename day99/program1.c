#include <stdio.h>
#include <stdlib.h>
struct Student {                        //Declaration of structure
    char name[50];
    int roll;
    int marks;
};
int main() {
    struct Student *s;                //Declarating structure variable 
    s = (struct Student*) malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed\n");     //Output statement if s is empty
    }
    scanf("%s %d %d", s->name, &s->roll, &s->marks);          //Accepting values from the user
    printf("Name: %s\nRoll: %d\nMarks: %d", s->name, s->roll, s->marks);    //Printing the required output
    free(s);
    return 0;
}
