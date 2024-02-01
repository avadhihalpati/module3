// Accept number of students from user. I need to give 5 apples to each
// student. How many apples are required?

#include <stdio.h>
void main() {
  int std, totalApple;
  printf("Enter the student number :\n");
  scanf("%d", & std);
  totalApple = 5 * std;
  printf("total appler are require :%d\n", totalApple);

}