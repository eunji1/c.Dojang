# Unit 11. 입력 값을 변수에 저장하기

## 11 입력값을 변수에 저장하기
```scanf``` 함수를 사용하여 표준 입력으로 사용자의 입력 받아보기

- scanf(서식, 변수의주소);
    - int scanf(char const * const _Format, ...);
    - 성공하면 가져온 값의 개수를 반환, 실패하면 EOF(-1)를 반환

```c
#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    printf("정수를 입력하세요: ");
    scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장

    printf("%d\n", num1);    // 변수의 내용을 출력

    return 0;
}
-----------------------------------------------------
실행 결과
정수를 입력하세요: 1 (입력)
1
```
- 여기서 주의할 점은 &num1처럼 변수 앞에 ```&```를 붙여주어야 한다

## 11.3 실수 입력받기
```c
#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    float num1;

    printf("실수를 입력하세요: ");
    scanf("%f", &num1);    // 실수를 입력받아서 변수에 저장

    printf("%f\n", num1);    // 변수의 내용을 출력

    return 0;
}
---------------------------------------------------------------
실행 결과
실수를 입력하세요: 1.1 (입력)
1.100000
```

## 11.4 문자 입력받기
```c
#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char c1;

    printf("문자를 입력하세요: ");
    scanf("%c", &c1);    // 문자를 입력받아서 변수에 저장

    printf("%c\n", c1);    // 변수의 내용을 출력

    return 0;
}
------------------------------------------------------------------
실행 결과
문자를 입력하세요: a (입력)
a
```