// Convert country’s name in abbreviate form

#include<stdio.h>

int main() {
  char name[20];
  printf("Enter country's Name \n");
  scanf("%s", name);
  printf("Abbreviated Name: ");
  printf("%c. ", name[0]);
  return 0;

}