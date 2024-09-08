// Includes
#include <stdio.h>
#include <math.h>

// Define pi
#define PI 3.14159

// Doubles
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

// Main
int main(void) 
{
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}

// Distance Func
double calculateDistance() 
{
    double x1, y1, x2, y2, distance;

    // Input
    printf("Enter x1 and y1 for Point #1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter x2 and y2 for Point #2: ");
    scanf("%lf %lf", &x2, &y2);

    // Calc
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// Perimeter Func
double calculatePerimeter() 
{
    // Calc
    double distance = calculateDistance();
    double perimeter = PI * distance;

    printf("The perimeter of the circle is %.2f\n", perimeter);

    // Difficulty 1.0-5.0
    return 2.0; 
}

// Area Func
double calculateArea() 
{
    // Calc
    double distance = calculateDistance();
    double radius = distance / 2.0;
    double area = PI * pow(radius, 2);

    printf("The area of the circle is %.2f\n", area);

    // Difficulty 1.0-5.0
    return 3.0; 
}

// Width Func
double calculateWidth() 
{
    // Calc
    double distance = calculateDistance();

    printf("The width of the circle is %.2f\n", distance);

    // Difficulty 1.0-5.0
    return 1.0; 
}

// Height Func
double calculateHeight() 
{
    // Calc
    double distance = calculateDistance();

    printf("The height of the circle is %.2f\n", distance);

    // Difficulty 1.0-5.0
    return 1.0; 
}