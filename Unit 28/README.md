# Unit 28. while 반복문으로 Hello, world! 100번 출력하기

while 반복문은 괄호 안에 조건식만 들어가고, 초기식은 반복문 바깥에 위치 <br>
그리고 중괄호 안에 반복할 코드와 변화식이 함께 들어감
```c
초기식
while (조건식) // ← 루프 선언문(loop statement)
{
    반복할 코드
    변화식
}
// ↑ 루프 본체(loop body) 및 변화식
```

<details>
<summary>[그림 28‑1] while 반복문의 동작 과정
</summary>
<div markdown="1">       

😎

while 반복문의 실행 과정
1. 먼저 초기식부터 시작하여 조건식을 판별
    - 여기서 조건식이 참이면 반복할 코드와 변화식을 함께 수행함
2. 그리고 다시 조건식을 판별 
    - 참이면 코드를 계속 반복하고, 거짓이면 반복문을 끝낸 뒤 다음 코드를 실행한다

![](https://dojang.io/pluginfile.php/281/mod_page/content/17/unit28-1.png)

여기서는 조건식 → 루프 본체 및 변화식 → 조건식으로 순환하는 부분이 루프(loop)입니다.

</div>
</details>


## 28.1 while 반복문 사용하기
```c
#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 100)    // i가 100보다 작을 때 반복. 0에서 99까지 증가하면서 100번 반복
    {
        printf("Hello, world!\n");
        i++;           // i를 1씩 증가시킴
    }

    return 0;
}
```
먼저 반복문에 사용할 변수 i를 선언한 뒤 0으로 초기화
그리고 while에 조건식 지정<br>
- 여기서 while 반복문은 반드시 ```{ } (중괄호)``` 안에 변화식을 지정해야함 
- 만약 조건식만 지정하고 중괄호 안에서 변화식을 생략하면 무한 루프되므로 주의


<details>
<summary>[그림 28‑2] while 반복문의 기본 형태
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/282/mod_page/content/19/unit28-2.png)

</div>
</details>


## 28.4 while 반복문과 세미콜론
for와 마찬가지로 while도 끝에 ```; (세미콜론)```을 붙이면 안된다.

## 28.6 반복 횟수가 정해지지 않은 경우
while 반복문은 반복 횟수가 정해지지 않았을 때, 논리 조건에 따라 반복 여부를 결정할 때 주로 사용<br>
다음은 while 반복문 안에서 무작위로 정수를 생성한 뒤 3이 나오면 반복을 끝냄
```c
#include <stdio.h>
#include <stdlib.h>    // srand, rand 함수가 선언된 헤더 파일
#include <time.h>      // time 함수가 선언된 헤더 파일

int main()
{
    srand(time(NULL));    // 현재 시간값으로 시드 설정

    int i = 0;
    while (i != 3)         // 3이 아닐 때 계속 반복
    {
        i = rand() % 10;   // rand 함수를 사용하여 무작위로 정수를 생성한 뒤 10 미만의 숫자로 만듦
        printf("%d\n", i);
    }

    return 0;
}
```
먼저 무작위로 정수를 생성하려면 srand, rand, time 함수가 필요하다.
- srand: 난수를 발생시킬 초깃값인 시드(seed)를 설정합니다. 보통 현재 시간값을 사용합니다.
- rand: 난수를 발생시킵니다.
- time: 정수 형태로 된 현재 시간값을 반환합니다.

## 28.7 while 반복문으로 무한 루프 만들기
```c
#include <stdio.h>

int main()
{
    while (1)    // while에 1을 지정하면 무한 루프
    {
        printf("Hello, world!\n");
    }

    return 0;
}
```

## 28.8 while 반복문에서 중괄호 생략하기
while 반복문으로 반복할 코드가 한 줄이라면 다음과 같이 중괄호는 생략할 수 있음
