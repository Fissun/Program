#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float a;
    float b;

    printf ("Equation type: x*a + b = 0\n");

    printf ("Enter a: ");
    scanf ("%f", &a);
    printf ("Enter b: ");
    scanf ("%f", &b);

    x=-b/a;

    printf ("Answer: %0.2f", x);

    return (0);
}
