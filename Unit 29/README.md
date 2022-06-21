# Unit 29. do while 반복문으로 최소 한 번은 실행하기

while 반복문은 조건식이 만족하지 않으면 반복을 하지 않고 넘어간다. <br>
```do while```은 코드를 최소 한 번은 실행하는 반복문

do while 반복문은 초기식이 반복문 바깥에 있다.<br>
그리고 do로 시작하여 중괄호 안에 반복할 코드와 변화식이 함께 들어가며 중괄호가 끝나는 부분에 조건식을 지정해준다.
```c
초기식
do // ↓ 루프 본체(loop body) 및 변화식
{
    반복할 코드
    변화식
} while (조건식);
//   ↑ 루프 선언문(loop statement)
```

<details>
<summary>[그림 29‑1] do while 반복문의 동작 과정
</summary>
<div markdown="1">       

😎

do while반복문의 실행 과정
1. 먼저 초기식의 값과는 상관 없이 do { } 부분의 코드와 변화식을 무조건 실행
2. 그다음 조건식을 판별하여 참이면 코드를 계속 반복하고 거짓이면 반복문을 끝낸 뒤 다음 코드를 실행

![](https://dojang.io/pluginfile.php/293/mod_page/content/17/unit29-1.png)

루프 본체 및 변화식 → 조건식으로 순환하는 부분이 루프(loop)이다.

</div>
</details>

## 29.1 do while 반복문 사용하기
```c
#include <stdio.h>

int main()
{
    int i = 0;

    do     // 처음 한 번은 아래 코드가 실행됨
    {
        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
        i++;                                // i를 1씩 증가시킴
    } while (i < 100);    // i가 100보다 작을 때 반복. 0부터 99까지 증가하면서 100번 반복

    return 0;
}
```

<details>
<summary>[그림 29‑2] do while 반복문의 기본 형태
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/294/mod_page/content/22/unit29-2.png)


</div>
</details>