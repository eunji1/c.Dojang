# Unit 22. 불 자료형 사용하기

## 22.1 stdbool.h 헤더 파일 사용하기
```c
#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일
 
int main()
{
    bool b1 = true;
 
    if (b1 == true)        // b1이 true인지 검사
        printf("참\n");    // b1이 true이므로 참이 출력됨
    else
        printf("거짓\n");
 
    return 0;
}
```
## 22.2 불 자료형 크기 알아보기
- int의 크기는 4바이트
- bool의 크기는 1바이트

## 22.3 불 자료형과 논리 연산자 사용하기
```c
#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일
 
int main()
{
    printf("%d\n", true && true);      // 1: true AND true는 1
    printf("%d\n", true && false);     // 0: true AND false는 0
    printf("%d\n", false && true);     // 0: false AND true는 0
    printf("%d\n", false && false);    // 0: false AND false는 0
 
    printf("%d\n", true || true);      // 1: true OR true는 1
    printf("%d\n", true || false);     // 1: true OR false는 1
    printf("%d\n", false || true);     // 1: false OR true는 1
    printf("%d\n", false || false);    // 0: false OR false는 0

    return 0;
}
```
- printf로 출력할 때 정수 출력과 동일하게 서식 지정자로 %d를 사용한다.

## 22.4 true, false를 문자열로 출력하기
```c
#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일 

int main()
{
    bool b1 = true;
    bool b2 = false;
 
    printf(b1 ? "true" : "false");    // b1이 true이므로 true가 출력됨
    printf("\n");
    printf(b2 ? "true" : "false");    // b2가 false이므로 false 출력됨
    printf("\n");
 
    printf("%s\n", b1 ? "true" : "false");    // b1이 true이므로 true가 출력됨
    printf("%s\n", b2 ? "true" : "false");    // b2가 false이므로 false 출력됨

    return 0;
}
```
- 서식 지정자 없이 그대로 출력해도 되고, %s 서식 지정자를 사용해도 된다.

## 22.5 if 조건문에서 불 자료형 사용하기
```c
#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일
 
int main()
{
    if (true)              // 불 true 사용
        printf("참\n");    // 참이므로 참이 출력됨
    else
        printf("거짓\n");

    if (false)             // 불 false 사용
        printf("참\n");
    else
        printf("거짓\n");  // 거짓이므로 거짓이 출력됨

    return 0;
}
```
