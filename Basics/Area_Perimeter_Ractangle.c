// Write a C program to calculate the area and perimeter of a Rectangle. 

// Area means the space inside the rectangle
// Formula: Area = length × width

// Perimeter means the total boundary (all sides added together)
// Formula: Perimeter = 2 × (length + width)

#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);

    return 0;
}