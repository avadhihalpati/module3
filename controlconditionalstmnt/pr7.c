// Accept marks from user and check pass or fail


#include <stdio.h>

int main() {
    int marks;
    printf("enter marks \n");
    scanf("%d", &marks );
    if (marks <= 30){
        printf ("fail\n");
    }
    else {
        printf(" pass");
    }
    return 0;
}