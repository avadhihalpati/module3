// Sum of even numbers
#include <stdio.h>

int main()
{
    int i, n, sum=0;
    for(i=2; i<=10; i+=2)
    {
        sum += i;
    }

    printf("Sum of even number between 1 to 10 is %d = %d", n, sum);
}