#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()

{
    setlocale(LC_ALL, "RUS");

    double x, fx;
    printf("������� x: ");
    scanf("%lf", &x); // ����������� ������ x = 2 � x = 4

    fx = (x <= 3) ? (x * x - 3 * x + 9) : (1 / (x * x * x + 6));
    printf("F(%.2lf) = %.2lf\n", x, fx);


    return 0;
}