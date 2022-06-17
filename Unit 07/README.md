# Unit 7. 정수 자료형 사용하기
## 7.0 정수 자료형 사용하기
C언어에서는 다양한 형태의 자료형을 제공

정수 자료형은 크게 char, int가 있으며 앞에 부호 키워드(signed, unsigned)와 크기(short, long)를 붙여서 특성을 정의할 수 있다.
- signed: 부호 있는 정수를 표현합니다. 보통 signed 키워드는 생략합니다.
- unsigned: 부호 없는 정수를 표현합니다. 따라서 값은 0부터 시작하게 됩니다.

<details>
<summary>[그림 7-1] 정수형 크기 및 범위
</summary>
<div markdown="1">       

😎
![](https://dojang.io/pluginfile.php/73/mod_page/content/50/unit7-1.png)
</div>
</details>

## 7.3 자료형 크기 구하기
자료형(타입)의 크기를 바이트(byte) 단위로 구하는 ```sizeof``` 연산자
- sizeof(자료형)
```
int size;

size = sizeof(int);
```
- sizeof(표현식)
```
int num1 = 0;
int size;

size = sizeof(num1);
```
char는 1바이트, short는 2바이트, int와 long은 4바이트, long long은 8바이트(여기서 unsigned가 붙어도 크기는 같다)

## 7.5 크기가 표시된 정수 자료형 사용하기
C언어는 컴퓨터 역사상 초기에 개발된 언어이기 때문에 ```char, short, long, long long``` 등 지금 보기에는 다소 모호한 표기법이 많다.<br>
시간이 지나면서 16비트, 32비트, 64비트 CPU가 나오고, 운영체제가 발전하면서 정수 자료형의 크기도 그때그때 달라졌다.<br>
정수 자료형 이름은 많은 혼란을 가져왔고 C99 표준부터는 stdint.h 헤더 파일이 추가되었다.<br>

다음은 stdint.h 헤더 파일을 사용하여 크기가 표시된 정수 자료형으로 변수를 선언한다.
```
#include <stdio.h>
#include <stdint.h>    // 크기별로 정수 자료형이 정의된 헤더 파일

int main()
{
    int8_t num1 = -128;                    // 8비트(1바이트) 크기의 부호 있는 정수형 변수 선언
    int16_t num2 = 32767;                  // 16비트(2바이트) 크기의 부호 있는 정수형 변수 선언 
    int32_t num3 = 2147483647;             // 32비트(4바이트) 크기의 부호 있는 정수형 변수 선언
    int64_t num4 = 9223372036854775807;    // 64비트(8바이트) 크기의 부호 있는 정수형 변수 선언

    // int8_t, int16_t, int32_t는 %d로 출력하고 int64_t는 %lld로 출력
    printf("%d %d %d %lld\n", num1, num2, num3, num4); // -128 32767 2147483647 9223372036854775807

    uint8_t num5 = 255;                      // 8비트(1바이트) 크기의 부호 없는 정수형 변수 선언
    uint16_t num6 = 65535;                   // 16비트(2바이트) 크기의 부호 없는 정수형 변수 선언
    uint32_t num7 = 4294967295;              // 32비트(4바이트) 크기의 부호 없는 정수형 변수 선언
    uint64_t num8 = 18446744073709551615;    // 64비트(8바이트) 크기의 부호 없는 정수형 변수 선언

    // uint8_t, uint16_t, uint32_t는 %u로 출력하고 uint64_t는 %llu로 출력
    printf("%u %u %u %llu\n", num5, num6, num7, num8); // 255 65535 4294967295 18446744073709551615

    return 0;
}
```
부호없는 정수 자료형은 앞에 u를 붙여서 크기를 정확하게 표현해야하는 파일 압축 및 암호화, 네트워크 프로그래밍을 할 때 특히 유용하며, 일반적인 프로그래밍을 할 때도 처음부터 stdint.h를 사용하는 것이 좋다.

stdint의 최소, 최댓값은 stdint.h 헤더 파일안에 정의되어있으므로 limits.h 헤더 파일을 사용하지 않아도 된다.
- 부호 있는 정수(signed) 최솟값: INT8_MIN, INT16_MIN, INT32_MIN, INT64_MIN
- 부호 있는 정수 최댓값: INT8_MAX, INT16_MAX, INT32_MAX, INT64_MAX
- 부호 없는 정수(unsigned) 최솟값: 0
- 부호 없는 정수 최댓값: UINT8_MAX, UINT16_MAX, UINT32_MAX, UINT64_MAX