#include<stdio.h>
struct Student{
char name[20];
int age;
float total_marks;
};
int main() {
    struct Student s[2];
    float avg;


    for(int i = 0; i < 2; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", s[i].name);

        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &s[i].age);

        printf("Enter total marks of student %d: ", i + 1);
        scanf("%f", &s[i].total_marks);

        printf("\n");
    }

    printf(" Student Details \n");
    for(int i = 0; i < 2; i++) {
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Total Marks: %.2f\n\n", s[i].total_marks);
    }


    avg = (s[0].total_marks + s[1].total_marks) / 2;

    printf("Average of total marks = %.2f\n", avg);

    return 0;
}

