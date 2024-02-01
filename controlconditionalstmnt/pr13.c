// WAP to find minimum number among 3 numbers using 
// ternary operator

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2,num3; 
    printf("Enter three numbers: ");  
    scanf("%d %d %d",&num1,&num2,&num3);
       int result=num3<(num1<num2?num1:num2)?num3:((num1<num2)? num1:num2);
        printf("\n The Smallest number is: %d ",result);
}