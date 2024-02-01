// Accept 5 employees name and salary and count average and total 
// salary

#include <stdio.h>
int main() {
    char id[10];         
    int hour;         
    double value, salary; 
    printf("Input the Employees ID: ");
    scanf("%s", &id);
     printf("Input the Employees ID: ");
    scanf("%s", &id);
     printf("Input the Employees ID: ");
    scanf("%s", &id);
     printf("Input the Employees ID: ");
    scanf("%s", &id);
     printf("Input the Employees ID: ");
    scanf("%s", &id);
    printf("\nInput the working hrs: ");
    scanf("%d", &hour);
    printf("\nSalary amount/hr: ");
    scanf("%lf", &value);
    salary = value * hour;
    printf("\nEmployees ID = %s\nSalary = U$ %lf\n", id, salary);
}
