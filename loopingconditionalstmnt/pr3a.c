// WAP to take 10 no. Input from user find out below values
// a. How many Even numbers are there


#include <stdio.h>
int main() {
    int i; 
    printf("Even numbers between 1 to 10:\n");

    for (i = 1; i <= 10; i++) 
    {
        if(i%2 == 0) 
        {
            printf("%d ", i); 
        }
    }

    return 0;
}
