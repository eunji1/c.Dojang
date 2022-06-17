// 1.970000 5.524218 37928000.000000이 출력
#include <stdio.h>

int main()
{
    float num1 = 1.97f;
    long double num2 = 5.524218l;
    double num3 = 3792.8e+4;

    printf("%f %Lf %f\n", num1, num2, num3);

    return 0;
}
