// Accept monthly salary from the user and deduct 10% insurance premium,
// 10% loan installment find out of remaining salary

#include <stdio.h>

int main() {
    float monthlySalary, remainingSalary;
    const float insurancePremiumRate = 0.10;
    const float loanInstallmentRate = 0.10;

    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);

    float insurancePremium = monthlySalary * insurancePremiumRate;
    float loanInstallment = monthlySalary * loanInstallmentRate;
    remainingSalary = monthlySalary - insurancePremium - loanInstallment;

    printf("\nDeductions:\n");
    printf("Insurance Premium (10%%): %.2f\n", insurancePremium);
    printf("Loan Installment (10%%): %.2f\n", loanInstallment);
    
    printf("\nRemaining Salary: %.2f\n", remainingSalary);
}
