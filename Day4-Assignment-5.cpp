#include <stdio.h>
#define MAX_EMPLOYEES 100

struct employee {
    int eno;
    char ename[50];
    float salary;
};

int main() {
    int n, i;
    struct employee emp[MAX_EMPLOYEES], max_salary_emp;

    // Accept details of 'n' employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d:\n", i+1);
        printf("Employee Number: ");
        scanf("%d", &emp[i].eno);
        printf("Employee Name: ");
        scanf("%s", emp[i].ename);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Find employee with the highest salary
    max_salary_emp = emp[0];
    for (i = 1; i < n; i++) {
        if (emp[i].salary > max_salary_emp.salary) {
            max_salary_emp = emp[i];
        }
    }

    // Display employee with the highest salary
    printf("\nDetails of Employee with Highest Salary:\n");
    printf("Employee Number: %d\n", max_salary_emp.eno);
    printf("Employee Name: %s\n", max_salary_emp.ename);
    printf("Salary: %.2f\n", max_salary_emp.salary);

    return 0;
}

