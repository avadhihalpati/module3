// A
// B C
// D E F 
// G H I J

#include <stdio.h>
int main() {
   int i,j;
   char m='A'-1;
   for(i=1;i<=5;i++)
   {
    for(j=1;j<=i;j++)
    {
        printf("%c",m++);
    }
    printf("\n");
   }
}