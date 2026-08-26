#include <stdio.h>


int main()
{
    int a;
    float b;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a floating-point number: ");
    scanf("%f", &b);

    // Implicit type conversion
    printf("\nImplicit Type Conversion:\n");
    printf("Addition = %f\n", a + b);
    printf("Subtraction = %f\n", a - b);
    printf("Multiplication = %f\n", a * b);
    printf("Division = %f\n", a / b);

    // Explicit type conversion
    printf("\nExplicit Type Conversion:\n");
    printf("Addition = %f\n", (float)a + b);
    printf("Subtraction = %f\n", (float)a - b);
    printf("Multiplication = %f\n", (float)a * b);
    printf("Division = %f\n", (float)a / b);

    return 0;
}