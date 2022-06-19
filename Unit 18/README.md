# Unit 18. else를 사용하여 두 방향으로 분기하기

## 18.1 else 사용하기
```c
if (조건식)
{
    코드1
}
else
{
    코드2
}
```
```c
#include <stdio.h>
 
int main()
{
    int num1 = 5;
 
    if (num1 == 10)
    {
        printf("10입니다.\n");
    }
    else    // if의 조건식이 만족하지 않을 때 코드를 실행
    {
        printf("10이 아닙니다.\n");    // num1은 10이 아니므로 "10이 아닙니다."가 출력됨
    }
 
    return 0;
}
```

<details>
<summary>[그림 18‑2] if와 else
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/177/mod_page/content/20/unit18-2.png)

</div>
</details>

## 18.2 else와 세미콜론
if와 마찬가지로 else도 세미콜론을 붙이지 않도록 주의

## 18.3 else에서 중괄호 생략하기
else도 if와 마찬가지로 실행할 코드가 한 줄이면 중괄호를 생략할 수 있다.

## 18.4 if 조건문의 동작 방식 알아보기
C 언어에서 if는 0일 때 ```거짓```, 0이 아닐 때 ```참```으로 동작
```c
#include <stdio.h>
 
int main()
{
    if (2)    // 0이 아니므로 참
        printf("참\n");
    else
        printf("거짓\n");
 
    return 0;
}
```
## 18.5 조건식을 여러 개 지정하기





