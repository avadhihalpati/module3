// Program of Armstrong Number in C Using For Loop & While 
// Loop

#include <stdio.h>
#include <stdbool.h>

bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digitCount = 0;
    while (num != 0) {
        num /= 10;
        digitCount++;
    }
    num = originalNum;
    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digitCount);
        num /= 10;
    }
    return (sum == originalNum);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
}