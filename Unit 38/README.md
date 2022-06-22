# Unit 38. 포인터와 배열 응용하기

## 38.1 포인터에 할당된 메모리를 배열처럼 사용하기
포인터를 배열처럼 사용하는 방법
- 자료형 *포인터이름 = malloc(sizeof(자료형) * 크기);
```c
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int *numPtr = malloc(sizeof(int) * 10);    // int 10개 크기만큼 동적 메모리 할당

    numPtr[0] = 10;    // 배열처럼 인덱스로 접근하여 값 할당
    numPtr[9] = 20;    // 배열처럼 인덱스로 접근하여 값 할당

    printf("%d\n", numPtr[0]);    // 배열처럼 인덱스로 접근하여 값 출력
    printf("%d\n", numPtr[9]);    // 배열처럼 인덱스로 접근하여 값 출력

    free(numPtr);    // 동적으로 할당한 메모리 해제

    return 0;
}
```
배열처럼 [ ] 안에 인덱스를 지정하여 값을 할당하거나 가져올 수 있음
- 포인터[인덱스]



<details>
<summary>[그림 38-1] 포인터를 배열처럼 사용
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/381/mod_page/content/23/unit38-1.png)

</div>
</details>

## 38.3 포인터에 할당된 메모리를 2차원 배열처럼 사용하기
- ```자료형 **포인터이름 = malloc(sizeof(자료형 *)* 세로크기);``` 와 같이 세로 공간 메모리 할당
    - 반복문으로 반복하면서 **포인터[i] = malloc(sizeof(자료형) * 가로크기);** 와 같이 가로 공간 메모리 할당
    - 반복문으로 반복하면서 **free(포인터[i]);** 와 같이 가로 공간 메모리 해제
    - **free(포인터);** 와 같이 세로 공간 메모리 해제
```c
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int **m = malloc(sizeof(int *) * 3);   // 이중 포인터에 (int 포인터 크기 * 세로 크기)만큼
                                           // 동적 메모리 할당. 배열의 세로

    for (int i = 0; i < 3; i++)            // 세로 크기만큼 반복
    {
        m[i] = malloc(sizeof(int) * 4);    // (int 크기 * 가로 크기)만큼 동적 메모리 할당.
                                           // 배열의 가로
    }

    m[0][0] = 1;    // 세로 인덱스 0, 가로 인덱스 0인 요소에 값 할당
    m[2][0] = 5;    // 세로 인덱스 2, 가로 인덱스 0인 요소에 값 할당
    m[2][3] = 2;    // 세로 인덱스 2, 가로 인덱스 3인 요소에 값 할당

    printf("%d\n", m[0][0]);    // 1: 세로 인덱스 0, 가로 인덱스 0인 요소의 값 출력
    printf("%d\n", m[2][0]);    // 5: 세로 인덱스 2, 가로 인덱스 0인 요소의 값 출력
    printf("%d\n", m[2][3]);    // 2: 세로 인덱스 2, 가로 인덱스 3인 요소의 값 출력

    for (int i = 0; i < 3; i++)    // 세로 크기만큼 반복
    {
        free(m[i]);                // 2차원 배열의 가로 공간 메모리 해제
    }

    free(m);    // 2차원 배열의 세로 공간 메모리 해제

    return 0;
}
```

```
int **m = malloc(sizeof(int *) * 3);    // 이중 포인터에 (int 포인터 크기 * 세로 크기)만큼
                                        // 메모리 할당. 배열의 세로
```

이중 포인터에 2차원 배열의 세로 공간에 해당하는 메모리를 할당하는 모습을 그림으로 표현하면 다음과 같다

<details>
<summary>[그림 38-2] 이중 포인터에 배열의 세로 공간 할당
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/383/mod_page/content/22/unit38-2.png)

</div>
</details>

이제 세로 크기만큼 반복하면서 2차원 배열의 가로 공간에 해당하는 메모리를 할당합니다. 가로 공간에는 int형 숫자가 들어갈 것이므로 sizeof(int)에 가로 크기 4를 곱해줍니다.
```
for (int i = 0; i < 3; i++)            // 세로 크기만큼 반복
{
    m[i] = malloc(sizeof(int) * 4);    // (int 크기 * 가로 크기)만큼 동적 메모리 할당.
                                       // 배열의 가로
}
```
이중 포인터에 2차원 배열의 가로 공간에 해당하는 메모리를 할당하는 모습을 그림으로 표현하면 다음과 같다

<details>
<summary>[그림 38-3] 이중 포인터에 배열의 가로 공간 할당
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/383/mod_page/content/22/unit38-3.png)

</div>
</details>

```
for (int i = 0; i < 3; i++)    // 세로 크기만큼 반복
{
    free(m[i]);                // 2차원 배열의 가로 공간 메모리 해제
}

free(m);    // 2차원 배열의 세로 공간 메모리 해제
```

메모리를 할당할 때 세로 → 가로 순서로 할당했으므로 해제할 때는 반대로 가로 → 세로 순서로 해제합니다.