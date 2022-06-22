# Unit 40. 입력 값을 문자열에 저장하기

scanf 함수에서 서식 지정자로 %s를 사용하면 입력 값을 배열 형태의 문자열에 저장할 수 있습니다(stdio.h 헤더 파일에 선언되어 있습니다).

- scanf("%s", 배열);
    - int scanf(char const * const _Format, ...);
    - 성공하면 가져온 값의 개수를 반환, 실패하면 EOF(-1)를 반환
```c
#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char s1[10];    // 크기가 10인 char형 배열을 선언

    printf("문자열을 입력하세요: ");
    scanf("%s", s1);     // 표준 입력을 받아서 배열 형태의 문자열에 저장

    printf("%s\n", s1);  // 문자열의 내용을 출력

    return 0;
}
```
## 40.3 문자열을 여러 개 입력받기
- scanf("%s %s ...", 배열1, 배열2, ...);
- scanf("%s %s ...", 문자열포인터1, 문자열포인터2, ...);
```c
#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char s1[10];    // 크기가 10인 char형 배열을 선언
    char s2[10];    // 크기가 10인 char형 배열을 선언

    printf("문자열을 두 개 입력하세요: ");
    scanf("%s %s", s1, s2);    // 표준 입력에서 공백으로 구분된 문자열 두 개를 입력받음

    printf("%s\n", s1);    // s1의 내용을 출력
    printf("%s\n", s2);    // s2의 내용을 출력

    return 0;
}
```




