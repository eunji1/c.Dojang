# Unit 30. break, continue로 반복문 제어하기


break와 continue를 사용하여 반복문을 제어

<details>
<summary>[그림 30‑1] switch의 제어흐름과 break
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/304/mod_page/content/14/unit30-1.png)

</div>
</details>

## 30.1 break로 반복문 끝내기
```c
#include <stdio.h>

int main()
{
    int num1 = 0;

    while (1)   // 무한 루프
    {
        num1++;  // num1을 1씩 증가시킴

        printf("%d\n", num1);

        if (num1 == 100)    // num1이 100일 때
            break;          // 반복문을 끝냄. while의 제어흐름을 벗어남
    }

    return 0;
}
```
## 30.2 continue로 코드 실행 건너뛰기
```c
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)    // 1부터 100까지 증가하면서 100번 반복
    {
        if (i % 2 != 0)               // i를 2로 나누었을 때 나머지가 0이 아니면 홀수
            continue;                 // 아래 코드를 실행하지 않고 건너뜀

        printf("%d\n", i);
    }

    return 0;
}
```
```c
#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 100)     // i가 100보다 작거나 같을 때 반복. 1부터 100까지 증가하면서 100번 반복
    {
        i++;             // i를 1씩 증가시킴
        if (i % 2 != 0)  // i를 2로 나누었을 때 나머지가 0이 아니면 홀수
            continue;    // 아래 코드를 실행하지 않고 건너뜀

        printf("%d\n", i);
    }

    return 0;
}
```

<details>
<summary>[그림 30‑3] continue로 코드 실행 건너뛰기
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/306/mod_page/content/21/unit30-3.png)


</div>
</details>

## 30.3 입력한 횟수대로 반복하기





