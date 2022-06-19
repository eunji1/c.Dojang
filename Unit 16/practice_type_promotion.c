#include <stdio.h>
// a가 출력되게 만드세요
int main()
{
    char c1 = 'a';
    char num2 = c1;

    printf("%c\n", num2);

    return 0;
}

/*
char 또는 unsigned char
short 또는 unsigned short
int 또는 unsigned int
long 또는 unsigned long
long long 또는 unsigned long long
*/

// char는 정수 자료형이므로 char 또는 char보다 큰 정수 자료형에 저장할 수 있습니다. 
// char, short, int, long, long long이나 unsigned char, unsigned short, unsigned int, unsigned long, unsigned long long으로 선언하면 된다