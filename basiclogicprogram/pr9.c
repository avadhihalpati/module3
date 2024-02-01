// Find circumference of Triangle formula : triangle = a + b + c
#include<stdio.h>

int main()
{
  float a, b, c, Perimeter, s, Area;
  
  printf("\nPlease Enter three sides of triangle\n");
  scanf("%f%f%f",&a,&b,&c);
 
  Perimeter = a+b+c;
  s = (a+b+c)/2;
  Area = sqrt(s*(s-a)*(s-b)*(s-c)) ;
  printf("\n Perimeter of Traiangle is = %f\n", Perimeter);
  printf("\n Semi Perimeter of Traiangle is = %f\n",s);
  printf("\n Area of triangle is = %f\n",Area);

  
}