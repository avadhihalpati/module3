//  WAP to print factorial of given number

#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter number:");
    scanf("%d",&num);
    while(num>=1){
        fact=fact*num;
      num--;
    }
    printf("the factorial of given number is:%d",fact);
}