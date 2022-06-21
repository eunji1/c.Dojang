# Unit 27. for 반복문으로 Hello, world! 100번 출력하기

C 언어의 for 반복문은 다음과 같이 괄호 안에 초기식, 조건식, 변화식을 지정하며 이 부분을 루프 선언문(loop statement)이라고 부릅니다. 그리고 중괄호 안에 반복할 코드를 작성하는데 이 부분을 루프 본체(loop body)라고 부릅니다
```c
for (초기식; 조건식; 변화식) // ← 루프 선언문(loop statement)
{
    반복할 코드
}
// ↑ 루프 본체(loop body)
```

<details>
<summary>[그림 27‑1] for 반복문의 동작 과정
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/268/mod_page/content/21/unit27-1.png)

조건식 → 루프 본체 → 변화식 → 조건식으로 순환하는 부분을 루프(loop)라고 부름


</div>
</details>

## 27.1 for 반복문 사용하기
```c
#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++)    // 0부터 99까지 증가하면서 100번 반복
    {
        printf("Hello, world!\n");
    }

    return 0;
}
```

<details>
<summary>[그림 27‑2] for 반복문의 기본 형태
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/269/mod_page/content/26/unit27-2.png)

</div>
</details>

## 27.2 초깃값의 변화 알아보기
for 반복문이 끝나면 반복에 사용한 변수 i의 값은 어떻게 될까요?
```c
#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++)    // 0부터 9까지 증가하면서 10번 반복
    {
        printf("Hello, world!\n");
    }

    printf("%d\n", i);    // 반복문이 끝난 뒤 i의 값 출력

    return 0;
}
------------------------------------------------------
실행 결과
Hello, world!
Hello, world!
Hello, world!
Hello, world!
Hello, world!
Hello, world!
Hello, world!
Hello, world!
Hello, world!
Hello, world!
10
```
i가 0부터 시작해서 9까지 증가하면서 printf 함수를 실행하지만 i가 10이 되면 조건식 i < 10은 거짓이 되므로 반복을 끝

## 27.4 초깃값을 감소시키기
```c
#include <stdio.h>

int main()
{
    for (int i = 100; i > 0; i--)         // 100부터 1까지 감소하면서 100번 반복
    {
        printf("Hello, world! %d\n", i);  // Hello, world!와 i의 값을 함께 출력
    }

    return 0;
}
```
## 27.5 for 반복문과 세미콜론
for 반복문은 if 조건문과 마찬가지로 끝에 ```; (세미콜론)```을 붙이면 안된다.

## 27.6 for 반복문에서 중괄호 생략하기
for 반복문으로 반복할 코드가 한줄이라면 중괄호를 생략할 수 있다.
```c
#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++)
        printf("for 반복문\n");        // 이 줄만 반복됨
        printf("Hello, world!\n");    // 이 줄은 한 번만 실행됨

    return 0;
}
----------------------------------
실행 결과
... (생략)
for 반복문
for 반복문
for 반복문
for 반복문
Hello, world!
```
for로 반복한 printf가 두개인데도 중괄호를 생략하면 첫번 째 printf만 반복된다.<br>
for로 반복할 코드가 두 줄 이상이라면 중괄호로 묶어야 함

## 27.8 for 반복문에서 변수 두 개 사용하기
```c
#include <stdio.h>

int main()
{
    for (int i = 0, j = 0; i < 10; i++, j += 2)    // i는 1씩 증가, j는 2씩 증가
    {
        printf("i: %d, j: %d\n", i, j);
    }

    return 0;
}
```
## 27.9 for 반복문으로 무한 루프 만들기
```c
#include <stdio.h>

int main()
{
    for (;;)    // 초깃값, 조건식, 변화식을 모두 생략하면 무한 루프
    {
        printf("Hello, world!\n");
    }

    return 0;
}
```



