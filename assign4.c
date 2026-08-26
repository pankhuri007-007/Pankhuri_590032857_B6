#include <stdio.h>
#include <limits.h>

int main()
{
    char a;
    int b;
    float c;
    double d;
    long int e;
    short int f;

    printf("Size of char = %zu\n", sizeof(a));
    printf("Size of int = %zu\n", sizeof(b));
    printf("Size of float = %zu\n", sizeof(c));
    printf("Size of double = %zu\n", sizeof(d));
    printf("Size of long int = %zu\n", sizeof(e));
    printf("Size of short int = %zu\n", sizeof(f));

    printf("\nMinimum int = %d\n", INT_MIN);
    printf("Maximum int = %d\n", INT_MAX);
    printf("Minimum char = %d\n", CHAR_MIN);
    printf("Maximum char = %d\n", CHAR_MAX);

    return 0;
}