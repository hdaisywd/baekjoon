#include <stdio.h>

int main(void)
{
    double     num1, num2;
    double  result = 0;

    scanf("%lf %lf", &num1, &num2);

    result = num1 / num2;
    printf("%.10lf\n", result);
}