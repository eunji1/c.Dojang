// 0.000000e+00이 출력
#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = FLT_MIN;

    num1 = num1 / 100000000.0f;

    printf("%e\n", num1);

    return 0;
}

// float의 최솟값인 FLT_MIN 0이 되었다면 언더플로우가 발생한 상황
// num1을 큰 수로 나누면 된다