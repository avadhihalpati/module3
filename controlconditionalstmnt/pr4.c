// WAP to make simple calculator (operation include Addition,
// Subtraction,Multiplication, Division, modulo) using conditional
// statement

#include <stdio.h>
int main() {
  char a;
  double x, y;
  printf("choose one (sum,sub,mlti,div): ");
  scanf("%c", &a);
  printf("Enter two values: ");
  scanf("%lf %lf", &x, &y);

  switch (a) {
    case 'sum':
      printf("%lf + %lf = %lf", x, y, x + y);
      break;
    case 'sub':
      printf("%lf - %lf = %lf", x, y, x - y);
      break;
    case 'mlti':
      printf("%lf * %lf = %lf", x, y, x * y);
      break;
    case 'div':
      printf("%lf / %lf = %lf", x, y, x / y);
      break;
    default:
      printf("Enter correct value");
  }

}

