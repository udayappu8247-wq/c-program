
#include <stdio.h>
#define MAX 100
typedef struct {
    int emp_id;
    char name[50];
    float salary;
} Employee;

int main() {
    Employee employees[MAX];
    int n, i, maxIndex = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    for (i = 1; i < n; i++) {
        if (employees[i].salary > employees[maxIndex].salary) {
            maxIndex = i;
        }
    }

    printf("\nEmployee with highest salary:\n");
    printf("ID: %d\n", employees[maxIndex].emp_id);
    printf("Name: %s\n", employees[maxIndex].name);
    printf("Salary: %.2f\n", employees[maxIndex].salary);

    return 0;
}
