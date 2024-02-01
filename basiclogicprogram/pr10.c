// find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h> 

float sa(float l, float w, float h)    
{   
float sa ;  
sa =  2 * ((l * h) + (w * h) + (l * w));     
return(sa );   
}   
int main()   
{   
float l = 4.55, w = 9.10, h = 10;  
printf("Surface area of the rectangular prism  is: %f", sa(l,w,h));     
 
}  