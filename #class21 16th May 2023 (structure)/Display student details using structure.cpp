//display student details 


#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[100];
    char gender;
    float marks;
};

int main() {
    struct Student s[5]; 
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i+1);

        printf("Roll Number: ");
        scanf("%d", &s[i].rollNumber);

        printf("Name: ");
        scanf(" %[^\n]s", s[i].name);

        printf("Gender (M/F): ");
        scanf(" %c", &s[i].gender);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }
    printf("Student Information:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("Roll Number: %d\n", s[i].rollNumber);
        printf("Name: %s\n", s[i].name);
        printf("Gender: %c\n", s[i].gender);
        printf("Marks: %.2f", s[i].marks);
        printf("\n");
    }

    return 0;
}