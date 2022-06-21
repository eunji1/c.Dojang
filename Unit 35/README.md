# Unit 35. 메모리 사용하기


이번에는 포인터에 원하는 만큼 메모리 공간을 할당받아 사용하는 방법을 알아봄

먼저 다음과 같이 메모리는 malloc -> 사용 -> free 패턴 사용한다.

<details>
<summary>[그림 35-1] 메모리 사용 패턴
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/347/mod_page/content/15/unit35-1.png)

</div>
</details>

## 35.1 메모리 할당하기
메모리를 사용하려면 malloc 함수로 사용할 메모리 공간을 확보해야함

- 포인터 = malloc(크기);
    - void *malloc(size_t _Size);
    - 성공하면 메모리 주소를 반환, 실패하면 NULL을 반환

```c
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int num1 = 20;    // int형 변수 선언
    int *numPtr1;     // int형 포인터 선언

    numPtr1 = &num1;  // num1의 메모리 주소를 구하여 numPtr에 할당

    int *numPtr2;     // int형 포인터 선언

    numPtr2 = malloc(sizeof(int));    // int의 크기 4바이트만큼 동적 메모리 할당

    printf("%p\n", numPtr1);    // 006BFA60: 변수 num1의 메모리 주소 출력
                                // 컴퓨터마다, 실행할 때마다 달라짐

    printf("%p\n", numPtr2);     // 009659F0: 새로 할당된 메모리의 주소 출력
                                // 컴퓨터마다, 실행할 때마다 달라짐

    free(numPtr2);    // 동적으로 할당한 메모리 해제

    return 0;
}
```


여기서 numPtr1에는 일반 변수의 메모리 주소를 할당했고, numPtr2에는 malloc 함수로 메모리를 할당했습니다.<br>
같은 메모리 주소라도 내부적으로는 약간의 차이가 있습니다.<br>
스택과 힙 두가지인데 변수는 스택(stack)에 생성되며 malloc 함수는 힙(heap) 부분의 메모리를 사용한다. (스택, 힙의 위치와 커지는 방향은 운영체제 및 플랫폼에 따라 달라질 수 있음)


<details>
<summary>[그림 35-2] 스택과 힙(Windows x86/32비트)
</summary>
<div markdown="1">       

😎

![](https://dojang.io/pluginfile.php/348/mod_page/content/31/unit35-2.png)

</div>
</details>

스택과 힙의 큰 차이점은 메모리 해제이다. 스택에 생성된 변수는 사용한 뒤 따로 처리를 해주지 않아도 되지만 malloc 함수를 사용하여 힙에서 할당한 메모리는 반드시 해제를 해주어야 한다. 따라서 다음과 같이 free 함수로 메모리를 해제한다.

- free(포인터);
    - void free(void *_Block);

## 35.2 메모리에 값 저장하기
```c
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int *numPtr;    // int형 포인터 선언

    numPtr = malloc(sizeof(int));    // int의 크기 4바이트만큼 동적 메모리 할당

    *numPtr = 10;   // 포인터를 역참조한 뒤 값 할당

    printf("%d\n", *numPtr);    // 10: 포인터를 역참조하여 메모리에 저장된 값 출력

    free(numPtr);    // 동적 메모리 해제

    return 0;
}
```

```malloc 함수```로 할당한 메모리에 값을 저장할 때는 *numPtr = 10;처럼 포인터를 역참조한 뒤 값을 저장<br>
마찬가지로 printf 함수로 값을 출력할 때도 포인터를 역참조하여 값을 가져옴

메모리를 할당하고 사용한 뒤에는 반드시 ```free``` 함수로 해제

## 35.3 메모리 내용을 한꺼번에 설정하기
- memset(포인터, 설정할값, 크기);
    - void *memset(void *_Dst, int _Val, size_t _Size);
    - 값 설정이 끝난 포인터를 반환

```c
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // memset 함수가 선언된 헤더 파일

int main()
{
    long long *numPtr = malloc(sizeof(long long));  // long long의 크기 8바이트만큼 동적 메모리 할당

    memset(numPtr, 0x27, 8);    // numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정

    printf("0x%llx\n", *numPtr);    // 0x2727272727272727: 27이 8개 들어가 있음

    free(numPtr);    // 동적으로 할당한 메모리 해제

    return 0;
}
```
여기서는 ```memset(numPtr, 0x27, 8);```과 같이 사용했으므로 numPtr이 가리키는 메모리에는 16진수 27이 8개 들어가게 됩니다.

memset 함수는 주로 다음과 같이 설정할 값을 0으로 지정하여 메모리의 내용을 모두 0으로 만들 때 주로 사용합니다.
```c
memset(numPtr, 0, 8);    // numPtr이 가리키는 메모리를 8바이트만큼 0으로 설정
```

## 35.4 널 포인터 사용하기
```c
#include <stdio.h>

int main()
{
    int *numPtr1 = NULL;    // 포인터에 NULL 저장

    printf("%p\n", numPtr1);    // 00000000

    return 0;
}
```
NULL이 들어있는 포인터를 널 포인터(null pointer)라고 하며 아무것도 가리키지 않는 상태를 뜻