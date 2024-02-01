// Sum of odd numbers

#include <stdio.h>
int main()
{
    int i, n, sum=0;

    for(i=1; i<=10; i+=2)
    {
        sum += i;
    }
    printf("Sum of odd numbers = %d", sum);
}