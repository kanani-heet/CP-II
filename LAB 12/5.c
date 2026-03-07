//Allocate Dynamic Memory for a Structure Variable
#include <stdio.h>
#include <stdlib.h>

struct student {
    int roll;
    char name[50];
    float marks;
};

void main() {
    struct student *ptr;

    ptr = (struct student*) malloc(sizeof(struct student));

    printf("Enter Roll Number: ");
    scanf("%d", &ptr->roll);

    printf("Enter Name: ");
    scanf("%s", ptr->name);

    printf("Enter Marks: ");
    scanf("%f", &ptr->marks);

    printf("\nStudent Details:\n");
    printf("Roll = %d\n", ptr->roll);
    printf("Name = %s\n", ptr->name);
    printf("Marks = %.2f\n", ptr->marks);

    free(ptr);

}
