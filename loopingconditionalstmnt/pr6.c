// WAP to print Fibonacci series up to given numbers

#include<stdio.h>
int main(){
 int n1=0,n2=1,num1,temp=0,count;
 printf("Enter number/:");
 scanf("%d",&num1);
 printf("%d , %d ,",n1,n2);
 count=2;
 while(count<num1){
  temp=n1+n2;
  n1=n2;
  n2=temp;
  count++;
 printf(" %d, ",temp);
 }  
}