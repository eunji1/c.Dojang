#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���� �ҽ� �ڵ带 �ϼ��Ͽ� ���� 'q'�� �Է��ϸ� ���α׷��� ����ǰ� ���弼��.
int main()
{
    char c1;

    do
    {
        scanf("%c", &c1);
    } while (c1 != 'q');

    printf("���α׷� ����\n");

    return 0;
}
