# Unit 9. 문자 자료형 사용하기
## 9.0 문자 자료형 사용하기
C 언어에서는 정수 자료형인 char를 이용하여 문자 한 개를 저장<br>
다음은 문자 자료형의 크기와 저장할 수 있는 범위

▼ 표 9‑1 char의 크기 및 범위
|자료형|크기|범위|비고|
|---|---|---|---|
|char<br> signed char|1바이트, 8비트|-128~127|문자 저장|
|unsigned char|1바이트, 8비트|0~255|바이트 단위 데이터 저장|

- char에 문자를 저장할 때는 문자 자체를 저장하는 것이 아니라 문자에 해당하는 정숫값을 저장 (ASCII) 코드

C 언어에서 문자는 ' ' (작은따옴표)로 묶어서 표현
```
char c1 = 'a';
```
```
char c1 = 'Hello, world!';    // 잘못된 사용법. 작은따옴표는 문자 하나만 묶을 수 있음
```
## 9.1 문자 변수 선언하기
```
#include <stdio.h>
 
int main()
{
    char c1 = 'a';    // 문자 변수를 선언하고 문자 a를 저장
    char c2 = 'b';    // 문자 변수를 선언하고 문자 b를 저장
 
    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정숫값이 출력됨
    printf("%c, %d\n", c1, c1);    // a, 97: a의 ASCII 코드값은 97
    printf("%c, %d\n", c2, c2);    // b, 98: b의 ASCII 코드값은 98
 
    return 0;
}
------------------------------------------------------------
실행 결과
a, 97
b, 98
```
- char 변수나 문자를 출력할 때는 서식 지정자로 ```%c```를 사용
- 만약 서식 지정자로 ```%d```를 사용하여 출력하면 char 변수에 저장된 정숫값(ASCII 코드값)이 그대로 출력

## 9.2 문자로 연산하기
문자는 ASCII 코드 규칙에 의해 정수로 저장되므로 정수처럼 덧셈, 뺄셈 등을 할 수 있다.
```
#include <stdio.h>

int main()
{
    printf("%c %d\n", 'a' + 1, 'a' + 1);    // b 98: a는 ASCII 코드값 97이고, 
                                            // 97에 1을 더하여 98이 되었으므로 b가 출력됨

    printf("%c %d\n", 97 + 1, 97 + 1);      // b 98: ASCII 코드값 97에 1을 더하여 98이 되었으므로 
                                            // b가 출력됨

    return 0;
}
```

## 9.3 제어 문자 사용하기
```
#include <stdio.h>

int main()
{
    char c1 = 'a';           // 문자 a 할당
    char c2 = 'b';           // 문자 b 할당 
    char lineFeed = '\n';    // 제어 문자 \n 할당

    printf("%c%c%c%c", c1, lineFeed, c2, lineFeed);    // 제어 문자도 %c로 출력할 수 있음

    return 0;
}
```
- 자주 접하는 제어 문자의 ASCII 코드
|10진수|16진수|문자|표기법|설명|
|---|---|---|---|---|
|10|0x0A|LF|\n|개행, 라인 피드(Line Feed), 새 줄(new line), 줄바꿈|
|13|0x0D|CR|\r|복귀, 캐리지 리턴(Carriage Return), 줄의 끝에서 시작 위치로 되돌아감|
|9|0x09|TAB|\t|수평 탭(horizontal tab)|

```
#include <stdio.h>

int main()
{
    char lineFeed = '\n';    // 제어 문자 \n 할당

    printf("%d 0x%x\n", lineFeed, lineFeed);    // 10 0xa: 제어 문자의 ASCII 코드 출력

    return 0;
}
```
- \n은 ASCII 코드대로 10진수 10, 16진수 0xa가 나옴



