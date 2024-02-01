// Accept 3 numbers from user using while loop and check each numbers
// palindrome

#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reverseNum = 0;

    while (num > 0) {
        int digit = num % 10;
        reverseNum = reverseNum * 10 + digit;
        num /= 10;
    }

    return originalNum == reverseNum;
}

int main() {
    int num, count = 0;

    while (count < 3) {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (isPalindrome(num)) {
            printf("%d is a palindrome.\n", num);
        } else {
            printf("%d is not a palindrome.\n", num);
        }

        count++;
    }
}
