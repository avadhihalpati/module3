// Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>  

int  main(){
  int i, f = 1, num;  
  printf("Input the number : ");  
  scanf("%d", &num);  

  for(i = 1; i <= num; i++) 
      f = f * i;  

  printf("The Factorial of %d is: %d\n", num, f);  
   
}
