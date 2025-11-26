#include <stdio.h>
struct Employee {                        //Declaration of another structure variable(Nested structure)
    char name[50];
    int id;
    float marks;
} e1, e2;
int main(){
    printf("Enter the name, id and marks:");           //Asking user to enter details
    scanf("%s %d %f", e1.name, &e1.id, &e1.marks);     //Accepting detalis
    printf("Enter the name, id and marks:");           //Asking user to enter details
    scanf("%s %d %f", e2.name, &e2.id, &e2.marks);    //Accdpting details
    if ((strcmp(e1.name, e2.name) == 0) && (e1.id == e2.id) && (e1.marks == e2.marks)){           //Finding whether identical
        printf("Identical");
    }
    else{
        printf("Not Identical");
    }
    return 0;
}