#include <stdio.h>
#include <conio.h>

void main() {
    int choice = 3;
    
    
    float base = 5.0, height = 10.0; 
    float length = 8.0, width = 4.0; 
    float radius = 7.0;              

    printf(" Area Menu \n");
    printf("1. Area of Triangle");
    printf(" \n2. Area of Rectangle");
    printf(" \n3. Area of Circle\n");
    printf("Selected Choice: %d\n\n", choice);

    if (choice == 1) {
        float areaTriangle = 0.5 * base * height;
        printf("Area of Triangle: %.2f\n", areaTriangle);
    } 
    else if (choice == 2) {
        float areaRectangle = length * width;
        printf("Area of Rectangle: %.2f\n", areaRectangle);
    } 
    else if (choice == 3) {
        float areaCircle = 3.14159 * radius * radius;
        printf("Area of Circle: %.2f\n", areaCircle);
    } 
    else {
        printf("Invalid choice!\n");
    }

    getch();
}