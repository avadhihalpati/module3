// Accept 2 numbers and find out its sum check it size

#include<stdio.h>
int main(){
    int a,b,sum;
    
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
 sum=a+b;
      printf("\n the size of sum:%d",sizeof(sum));   
}