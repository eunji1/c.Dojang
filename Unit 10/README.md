# Unit 10. 상수 사용하기

## 10.0 상수 사용하기

```
//         ↓ 상수
const int con1 = 10;
//               ↑ 리터럴
```
리터럴(literal)은 "문자 그대로"라는 뜻인데 C 언어에서는 값 그 자체를 뜻함<br>
그리고 상수(constant)는 변수처럼 리터럴이 저장된 공간

## 10.1 리터럴 사용하기
```
#include <stdio.h>

int main()
{
    printf("%d\n", 19);        // 19: 10진 정수 리터럴
    printf("0%o\n", 017);      // 017: 8진 정수 리터럴
    printf("0x%X\n", 0x1F);    // 0x1F: 16진 정수 리터럴

    return 0;
}
```
- 10진수는 숫자 그대로, 8진수는 숫자 앞에 0, 16진수는 0x을 붙임
- 이때 printf에서 8진수를 출력하려면 서식 지정자로 %o를 사용 

```
#include <stdio.h>

int main()
{
    printf("%f\n", 0.1f);       // 0.100000: 실수 리터럴 소수점 표기
    printf("%f\n", 0.1F);       // 0.100000: 실수 리터럴 소수점 표기
    printf("%f\n", 1.0e-5f);    // 0.000010: 실수 리터럴 지수 표기법
    printf("%f\n", 1.0E-5F);    // 0.000010: 실수 리터럴 지수 표기법
}
```
- 실수 리터럴이 ```float``` f또는 F ```long double``` l또는 L  ```지수 표기법``` e 또는 E

## 10.2 상수 사용하기
- const 자료형 상수이름 = 값;
```
#include <stdio.h>

int main()
{
    const int con1 = 1;         // 상수. 선언과 동시에 초기화
    const float con2 = 0.1f;    // 상수. 선언과 동시에 초기화
    const char con3 = 'a';      // 상수. 선언과 동시에 초기화

    printf("%d %f %c\n", con1, con2, con3);    // 1 0.100000 a

    return 0;
}
```
- 상수를 선언하는 방법은 변수를 선언하는 방법과 같으며 자료형 앞에 const만 붙여주면 됨
- 단, 상수는 반드시 선언과 동시에 값을 할당하여 초기화해주어야 하며 초기화를 하지 않으면 컴파일 에러가 발생
```
#include <stdio.h>

int main()
{
    const int con1 = 1;

    con1 = 2;    // 상수에 값을 할당하면 컴파일 에러 발생

    printf("%d\n", con1);

    return 0;
}
```
- 즉, const를 붙여서 상수가 되면 더 이상 값을 할당할 수 없다.

## 10.3 정수 리터럴 접미사 사용하기
리터럴의 크기를 명확하게 표현하기 위해 접미사(suffix)를 사용
```
#include <stdio.h>

int main()
{
    printf("%ld\n", -10L);                       // long 크기의 정수 리터럴
    printf("%lld\n", -1234567890123456789LL);    // long long 크기의 정수 리터럴

    printf("%u\n", 10U);                         // unsigned int 크기의 정수 리터럴
    printf("%lu\n", 1234567890UL);               // unsigned long 크기의 정수 리터럴

    printf("%lu\n", 10UL);                       // unsigned long 크기의 정수 리터럴
    printf("%llu\n", 1234567890123456789ULL);    // unsigned long long 크기의 정수 리터럴

    return 0;
}
------------------------------------------------------
실행 결과
-10
-1234567890123456789
10
1234567890
10
1234567890123456789
```
리터럴은 접미사를 활용하여 크기를 명시적으로 표기

▼  표 10‑1 정수 리터럴 접미사
|접미사|자료형|
|---|---|
|생략|int|
|l, L|long|
|u, U|unsigned int|
|ul, UL|unsigned long|
|ll, LL|long long|
|ull, ULL|unsigned long long|


8진수와 16진수에도 접미사를 사용할 수 있다.
```
#include <stdio.h>

int main()
{
    printf("0%lo\n", 017L);             // long 크기의 8진 정수 리터럴
    printf("0%lo\n", 017UL);            // unsigned long 크기의 8진 정수 리터럴
    printf("0x%lX\n", 0x7FFFFFL);       // long 크기의 16진 정수 리터럴
    printf("0x%lX\n", 0xFFFFFFFFUL);    // unsigned long 크기의 16진 정수 리터럴

    return 0;
}
------------------------------------------------------
실행 결과
017
017
0x7FFFFF
0xFFFFFFFF
```

## 10.4 실수 리터럴 접미사 사용하기
```
#include <stdio.h>

int main()
{
    printf("%f\n", 0.1f);     // 0.100000: float 크기의 실수 리터럴
    printf("%f\n", 0.1F);     // 0.100000: float 크기의 실수 리터럴
    printf("%f\n", 0.1);      // 0.100000: double 크기의 실수 리터럴
    printf("%Lf\n", 0.1l);    // 0.100000: long double 크기의 실수 리터럴
    printf("%Lf\n", 0.1L);    // 0.100000: long double 크기의 실수 리터럴

    printf("%f\n", 1.0e-5f);     // 0.000010: float 크기의 실수 리터럴
    printf("%f\n", 1.0e-5F);     // 0.000010: float 크기의 실수 리터럴
    printf("%f\n", 1.0e-5);      // 0.000010: double 크기의 실수 리터럴
    printf("%Lf\n", 1.0e-5l);    // 0.000010: long double 크기의 실수 리터럴
    printf("%Lf\n", 1.0e-5L);    // 0.000010: long double 크기의 실수 리터럴

    return 0;
}
```
- f 또는 F를 붙이면 ```float 크기```가 되고, l 또는 L을 붙이면 ```long double 크기```고, 그리고 접미사를 붙이지 않으면 ```double 크기```





