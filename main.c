#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, S;

    printf("Введите расстояние от человека до реки: ");
    scanf("%lf", &a);

    printf("Введите расстояние от костра до реки: ");
    scanf("%lf", &b);

    printf("Введите расстояние между человеком и костром вдоль реки: ");
    scanf("%lf", &c);

    S = sqrt(pow(a + b, 2) + pow(c, 2));

    printf("Минимальное расстояние = %.2f\n", S);

    return 0;
}
