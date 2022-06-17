// 실수 자료형의 최솟값과 최댓값이 출력되게 만드세요
#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = FLT_MAX;
    double num2 = DBL_MIN;
    long double num3 = LDBL_MAX;

    printf("%.2f\n", num1);
    printf("%e\n", num2);
    printf("%Le\n", num3);

    return 0;
}
// FLT_MAX는 float.h 헤더 파일에 정의되어 있으므로 #include <float.h>
// double의 최솟값은 DBL_MIN, long double의 최댓값은 LDBL_MAX