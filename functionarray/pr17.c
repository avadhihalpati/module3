// WAP to show difference between
// Structure and Union

#include <stdio.h>

struct Point {
    int x;
    int y;
};


union Value {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    
    struct Point pointStruct;
    pointStruct.x = 10;
    pointStruct.y = 20;

    printf("Structure Example:\n");
    printf("X coordinate: %d\n", pointStruct.x);
    printf("Y coordinate: %d\n", pointStruct.y);
    printf("Size of Structure: %lu bytes\n", sizeof(pointStruct));

    union Value valueUnion;
    valueUnion.intValue = 42;

    printf("\nUnion Example:\n");
    printf("Integer Value: %d\n", valueUnion.intValue);
    printf("Size of Union: %lu bytes\n", sizeof(valueUnion));

   
}
