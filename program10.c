#include <stdio.h>
#define tee printf("+++++++++++++++++++++++++++\n")
int main()
{
    char emp_id[5], emp_name[50];
    double emp_salary, tax, social, salary_total;
    tee;
    printf("Salary Total App:\n");
    tee;
    printf("Enter Employee ID: ");
    scanf("%s", emp_id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp_name);
    printf("Enter Employee Salary:");
    scanf("%lf", &emp_salary);
    tee;
    tax = emp_salary *7/100;
    social = emp_salary*3/100;
    salary_total = emp_salary - tax - social;
    printf("emp_name:%s\n", emp_name);
    printf("emp_salary:%.2lf Baht \n", emp_salary);
    tee;
    printf("tax:%.2lf Baht \n", tax);
    printf("social:%.2lf Baht \n", social);
    printf("salary_total:%.2lf Baht \n", salary_total);
    tee;
}