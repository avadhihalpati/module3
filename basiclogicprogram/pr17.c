// Calculate person’s insurance premium based on salary

#include <stdio.h>

int main() {
    float salary, insurancePremium;
    const float premiumRate = 0.05; // Assuming a 5% insurance premium rate

    // Accept the person's salary from the user
    printf("Enter the person's salary: ");
    scanf("%f", &salary);

    // Calculate the insurance premium
    insurancePremium = salary * premiumRate;

    // Display the results
    printf("\nPerson's Salary: %f\n", salary);
    printf("Insurance Premium (5%%): %f\n", insurancePremium);

    return 0;
}
