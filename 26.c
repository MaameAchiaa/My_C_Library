/*
 ============================================================================
 Name        : 26.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <math.h>

// Function prototypes
float calculateArea(char shape);
void getInputs(char shape, float *dimension1, float *dimension2);

int main() {
    char shape;
    float area;

    // Ask user for the type of shape
    printf("Enter the shape (r for rectangle, s for square, c for circle, t for triangle): ");
    scanf(" %c", &shape);

    // Calculate area based on the shape
    area = calculateArea(shape);

    // Output the result
    printf("The area of the %s is %.2f.\n", (shape == 'r' ? "rectangle" :
                                             shape == 's' ? "square" :
                                             shape == 'c' ? "circle" :
                                             shape == 't' ? "triangle" : "unknown"), area);
    return 0;
}

// Function to calculate the area based on shape type
float calculateArea(char shape) {
    float dimension1, dimension2;

    // Get inputs based on the shape
    getInputs(shape, &dimension1, &dimension2);

    // Calculate area based on shape type
    switch (shape) {
        case 'r': // Rectangle
            return dimension1 * dimension2;
        case 's': // Square
            return dimension1 * dimension1;
        case 'c': // Circle
            return M_PI * dimension1 * dimension1; // M_PI is a constant in math.h
        case 't': // Equilateral Triangle
            return (sqrt(3) / 4) * dimension1 * dimension1;
        default:
            return 0; // Unknown shape
    }
}

// Function to get inputs from the user
void getInputs(char shape, float *dimension1, float *dimension2) {
    switch (shape) {
        case 'r': // Rectangle
            printf("Enter length and width: ");
            scanf("%f %f", dimension1, dimension2);
            break;
        case 's': // Square
            printf("Enter side length: ");
            scanf("%f", dimension1);
            *dimension2 = 0; // Not needed but for consistency
            break;
        case 'c': // Circle
            printf("Enter radius: ");
            scanf("%f", dimension1);
            *dimension2 = 0; // Not needed but for consistency
            break;
        case 't': // Equilateral Triangle
            printf("Enter side length: ");
            scanf("%f", dimension1);
            *dimension2 = 0; // Not needed but for consistency
            break;
        default:
            printf("Invalid shape type.\n");
            *dimension1 = 0;
            *dimension2 = 0;
            break;
    }
}

