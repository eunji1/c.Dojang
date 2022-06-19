# Unit 17. if 조건문으로 특정 조건일 때 코드 실행하기

## 17.1 if 조건문 사용하기
if 조건문은 괄호 안에 조건식을 지정하여 사용
```
if (조건식)
{
    코드
}
```


<details>
<summary>[그림 17‑1] if 조건문의 기본 형태
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/168/mod_page/content/21/unit17-1.png)

</div>
</details>

## 17.2 if조건문과 세미콜론
if 조건문을 사용할 때는 ; (세미콜론)을 항상 주의
```c
#include <stdio.h>
 
int main()
{
    int num1 = 5;
 
    if (num1 == 10)    // if 조건문 끝에는 세미콜론을 붙이면 안 됨
    {
        printf("10입니다.\n");
    }
 
    return 0;
}
```
## 17.3 if 조건문에서 중괄호 생략하기
```c
#include <stdio.h>
 
int main()
{
    int num1 = 10;
 
    if (num1 == 10)
        printf("10입니다.\n");    // 실행할 코드가 한 줄이라면 중괄호 생략
 
    return 0;
}
```

## 17.4 if 조건문에서 실수와 문자 비교하기
```c
#include <stdio.h>
 
int main()
{
    float num1 = 0.1f;
    char c1 = 'a';
 
    if (num1 == 0.1f)  // 실수 비교
        printf("0.1입니다.\n");
 
    if (c1 == 'a')     // 문자 비교
        printf("a입니다.\n");
 
    if (c1 == 97)      // 문자를 ASCII 코드로 비교
        printf("a입니다.\n");
 
    return 0;
}
```
## 17.5 사용자가 입력한 값에 if 조건문 사용하기
```c
#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
 
int main()
{
    int num1;

    scanf("%d", &num1);    // 입력받은 값을 변수에 저장
 
    if (num1 == 10)             // num1이 10이면
    {
        printf("10입니다.\n");  // "10입니다."를 출력
    }
 
    if (num1 == 20)             // num1이 20이면
    {
        printf("20입니다.\n");  // "20입니다."를 출력
    }
 
    return 0;
}
```


