#include <stdio.h>
// �ʱ������� 80�� �̻��̸鼭 ������ 850�� �̻��̾�� �հ�
int main()
{
    int writtenTest = 78;
    int toeic = 870;

    if (writtenTest >= 80 && toeic >= 850)
        printf("�հ�\n");
    else
        printf("���հ�\n");

    return 0;
}
