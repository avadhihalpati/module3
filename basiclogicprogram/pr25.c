// Accept 5 expense from user and find average of expense

#include <stdio.h>

int main() {
    const int numExpenses = 5;
    float expenses[numExpenses];
    float totalExpense = 0, averageExpense;

    printf("Enter 5 expenses:\n");
    for (int i = 0; i < numExpenses; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%f", &expenses[i]);
        totalExpense += expenses[i];
    }

    averageExpense = totalExpense / numExpenses;

    printf("\nEntered Expenses:\n");
    for (int i = 0; i < numExpenses; i++) {
        printf("Expense %d: %.2f\n", i + 1, expenses[i]);
    }

    printf("\nTotal Expense: %.2f\n", totalExpense);
    printf("Average Expense: %.2f\n", averageExpense);

    return 0;
}
