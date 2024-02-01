// Write a program make a summation of given number (E.g., 1523 Ans: -
// 11)
#include<stdio.h>

int main ()
{
    int num, sum = 0;
    num = 1234;
    printf("The number is = %d\n",num);
    while(num!=0){
        sum += num % 10;
        num = num / 10;
    }
    printf("Sum: %d\n",sum);

}