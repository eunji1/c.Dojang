# Unit 8. 실수 자료형 사용하기

## 8.0 실수 자료형 사용하기
다음은 실수 자료형의 크기와 저장할 수 있는 값의 범위

▼ 표 8‑1 실수 자료형의 크기 및 범위(Windows)
|자료형|크기|범위|유효자릿수|비고|
|---|---|---|---|---|
|float|4바이트,32비트|1.175494e-38~3.402823e+38|7|IEEE 754 단정밀도 부동소수점|
|double|8바이트,64비트|2.225074e-308~1.797693e+308|16|IEEE 754 배정밀도 부동소수점|
|long double|8바이트,64비트|2.225074e-308~1.797693e+308|16|IEEE 754 배정밀도 부동소수점|

## 8.1 실수형 변수 선언하기
```
#include <stdio.h>

int main()
{
    float num1 = 0.1f;               // 단정밀도 부동소수점 변수를 선언하고 값을 할당
                                     // float는 숫자 뒤에 f를 붙임

    double num2 = 3867.215820;       // 배정밀도 부동소수점 변수를 선언하고 값을 할당
                                     // double은 숫자 뒤에 아무것도 붙이지 않음

    long double num3 = 9.327513l;    // 배정밀도 부동소수점 변수를 선언하고 값을 할당
                                     // long double은 숫자 뒤에 l을 붙임

    // float와 double은 %f로 출력, long double은 %Lf로 출력
    printf("%f %f %Lf\n", num1, num2, num3);    // 0.100000 3867.215820 9.327513

    return 0;
}
```
- ```float```는 숫자 뒤에 f, F, ```long double```은 l, L, ```double```은 아무것도 붙이지 않음
- printf로 출력할 때 ```float와 double```는 서식 지정자로 %f를 사용하고, ```long double```을 출력할 때는 %Lf를 사용

이번에는 지수 표기법으로 실수를 저장
```
#include <stdio.h>

int main()
{
    float num1 = 3.e5f;             // 지수 표기법으로 300000을 표기
                                    // float는 숫자 뒤에 f를 붙임
 
    double num2 = -1.3827e-2;       // 지수 표기법으로 -0.013827을 표기
                                    // double은 숫자 뒤에 아무것도 붙이지 않음

    long double num3 = 5.21e+9l;    // 지수 표기법으로 5210000000을 표기
                                    // long double은 숫자 뒤에 l을 붙임

    // float와 double은 %f로 출력, long double은 %Lf로 출력
    printf("%f %f %Lf\n", num1, num2, num3); // 300000.000000 -0.013827 5210000000.000000

    // 지수 표기법으로 출력할 때는 float와 double은 %e로 출력, long double은 %Le로 출력
    printf("%e %e %Le\n", num1, num2, num3); // 3.000000e+05 -1.382700e-02 5.210000e+09

    return 0;
}
```
- ```float와 double```은 %e로, ```long double```은 %Le로 출력

## 8.2 자료형 크기 구하기
- ```float```는 4바이트, ```double과 long double```은 8바이트

## 8.3 최솟값과 최댓값 표현하기
실수 자료형의 양수 최솟값과 최댓값을 표현하는 방법
```
#include <stdio.h>
#include <float.h>    // 실수 자료형의 양수 최솟값, 최댓값이 정의된 헤더 파일

int main()
{
    float num1 = FLT_MIN;           // float의 양수 최솟값
    float num2 = FLT_MAX;           // float의 양수 최댓값
    double num3 = DBL_MIN;          // double의 양수 최솟값
    double num4 = DBL_MAX;          // double의 양수 최댓값
    long double num5 = LDBL_MIN;    // long double의 양수 최솟값
    long double num6 = LDBL_MAX;    // long double의 양수 최댓값

    printf("%.40f %.2f\n", num1, num2);    // 0.0000000000000000000000000000000000000118
                                           // 340282346638528859811704183484516925440.00

    printf("%e %e\n", num3, num4);         // 2.225074e-308 1.797693e+308
    printf("%Le %Le\n", num5, num6);       // 2.225074e-308 1.797693e+308
 
    return 0;
}
```
```float.h 헤더 파일```에 각 자료형 별로 양수 최솟값과 최댓값이 정의
- 서식 지정자를 ```%.40f, %.2f```처럼 소수점 뒤에 숫자를 지정하면 해당 숫자 만큼 소수점 이하 자릿수를 출력
- ```double, long double 최소, 최댓값```들은 소수점 이하 자리가 매우 길기 때문에 서식 지정자로 %e, %Le를 사용하여 지수 표기법으로 출력

## 8.4 오버플로우와 언더플로우 알아보기
실수 자료형도 오버플로우와 언더플로우가 발생
```
#include <stdio.h>
#include <float.h>    // 실수 자료형의 양수 최솟값, 최댓값이 정의된 헤더 파일

int main()
{
    float num1 = FLT_MIN;    // float의 양수 최솟값
    float num2 = FLT_MAX;    // float의 양수 최댓값

    // float의 양수 최솟값을 100000000.0으로 나누면 아주 작은 수가 되면서 언더플로우 발생
    num1 = num1 / 100000000.0f;

    // float의 양수 최댓값에 1000.0을 곱하면 저장할 수 있는 범위를 넘어서므로 오버플로우 발생
    num2 = num2 * 1000.0f;

    printf("%e %e\n", num1, num2);    // 0.000000e+00 inf: 실수의 언더플로우는 0
                                      // 오버플로우는 무한대가 됨

    return 0;
}
```
- C 언어에서는 실수 언더플로우를 0 또는 쓰레기 값으로 처리
- 정수와는 달리 실수는 오버플로우가 발생했을 때 최솟값으로 되돌아가지 않고 무한대(infinity)가 되므로 inf가 출력

<details>
<summary>[그림 8-2] float의 오버플로우와 언더플로우
</summary>
<div markdown="1">       

😎
![](https://dojang.io/pluginfile.php/99/mod_page/content/30/unit8-2.png)
</div>
</details>


