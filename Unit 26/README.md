# Unit 26. switch 분기문으로 다양한 조건 처리하기
switch 분기문으로 다양한 조건을 처리하는 방법

<details>
<summary>[그림 26‑1] switch 분기문의 기본 형태
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/259/mod_page/content/20/unit26-1.png)

</div>
</details>

## 26.1 사용자가 입력한 값에 따라 문자열 출력하기
```c
switch (변수)
{
case 숫자1:
    코드1
    break;
case 숫자2:
    코드2
    break;
default:
    코드3;
    break;
}
```
- case 다음에는 반드시 값(리터럴)이 와야 하며 변수나 조건식은 올 수 없다. 
- 또 case에 값을 지정했으면 ```: (콜론)```을 붙여 준 뒤 다음 줄부터 실행할 코드를 입력
- 코드의 마지막에는 break를 입력
```c
switch (num1)    // num1의 값에 따라 분기
{
case 1:    // 1일 때
    printf("1입니다.\n");
    break;
case 2:    // 2일 때
    printf("2입니다.\n");
    break;
default:   // 아무 case에도 해당되지 않을 때
    printf("default\n");
    break;
}
```
## 26.3 case에서 break 생략 응용하기
```c
#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);    // 값을 입력받음

    switch (num1)
    {
    case 1:    // 1 또는
    case 2:    // 2일 때 코드 실행
        printf("1 또는 2입니다.\n");
        break;
    case 3:    // 3 또는
    case 4:    // 4일 때 코드 실행
        printf("3 또는 4입니다.\n");
        break;
    default:
        printf("default\n");
    }

    return 0;
}
--------------------------------------------
실행 결과
1 (입력)
1 또는 2입니다.
```
이렇게 case 1:과 case 2:를 연달아서 지정하면 num1의 값이 1일 때도 코드가 실행되고 2일 때도 코드가 실행

## 26.4 case 안에서 변수 선언하기
switch의 case에 들어가는 코드가 길어지다 보면 변수를 선언하기도 함<br>

- case에서 변수를 선언하려면 다음과 같이 ```{ } (중괄호)```로 묶어주면 됨
```c
#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);    // 값을 입력받음

    switch (num1)    // num1의 값에 따라 분기
    {
    case 1:
    {   // case에서 변수를 선언하려면 중괄호로 묶어줌
        int num2 = num1;
        printf("%d입니다.\n", num2);
        break;
    }
    case 2:
        printf("2입니다.\n");
        break;
    default:
        printf("default\n");
        break;
    }

    return 0;
}
```
단, 중괄호 안에 선언된 변수 num2는 case 1: 안에서만 사용할 수 있고 case 2:나 switch 바깥에서는 사용할 수 없음

## 26.5 switch에서 판별할 수 있는 자료형 알아보기
switch에서 판별할 변수는 ```정수 자료형```만 사용할 수 있고, 실수 자료형(float, double)은 사용할 수 없음<br>
단, 문자 자료형(char)도 정수 자료형이므로 switch에서 사용할 수 있음


