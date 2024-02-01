//  WAP to accept the height of a person in centimeters and categorize the
// person according to their height

#include <stdio.h>   
void main()
{
    float h;   

    printf("Input the height of the person (in centimetres) :");   
    scanf("%f", &h);   
    if (h < 150.0)   
        printf("The person is short heighted \n");   
    else if ((h >= 150.0) && (h < 165.0))   
        printf("The person is  average heighted. \n");   
    else if ((h >= 165.0) && (h <= 195.0))   
        printf("The person is taller. \n");   
    else
        printf("over heighted\n");   
}
