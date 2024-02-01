// Calculate person’s Annual salary


#include <stdio.h>
int main()
{
    float basic, annual, da, hra; 
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);
 
    if(basic <= 10000)
    {
        da  = basic * 0.8;
        hra = basic * 0.2;
    }
    else if(basic <= 20000)
    {
        da  = basic * 0.9;
        hra = basic * 0.25;
    }
    else
    {
        da  = basic * 0.95;
        hra = basic * 0.3;
    }
    annual = basic + hra + da;
    printf("ANNUAL SALARY OF EMPLOYEE = %f", annual);
}