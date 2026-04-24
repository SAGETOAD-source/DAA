#include <stdio.h>
#include <math.h>
#define f(x) (pow(x, 3) - 2 * x - 5)
#define eps 0.001
void main()
{
    float a, b, c;
    printf("\n Enter the value of a: ");
    scanf("%f", &a);
    printf("\n Enter the value of b: ");
    scanf("%f", &b);
    int i = 1;
    printf("\n Iteration \t a0 \t b0 \t c \t f(a) \t f(b) \t f(c)");
    do
    {
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));
        printf("\n %d\t %f\t %f\t %f\t %f\t %f\t %f", i, a, b, c, f(a), f(b), f(c));
        if (f(c) == 0)
            break;
        else if (f(c) * f(a) < 0)
            b = c;
        else if (f(c) * f(b) < 0)
            a = c;
        i++;
    } while (fabs(f(c)) > eps);
    printf("\n\n The Approximate root is %f", c);
    printf("\n\n");
}
