// Convert minutes into seconds and hours

#include <stdio.h>
int main() {
    int min, h; 
    printf("Input minutes: ");
    scanf("%d", &min);
    h = (min/60);
    printf("H:%d\n",h);
	
}