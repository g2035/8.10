#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include"stack.h"


int main()
{
    stack q;
    q.top = 0;
    q.bottom = 0;
    int Ag;

    //��ʮ��������ջ�������ջ����������
    for (int i = 0; i < 10; i++)
    {
        Ag = i;
        Input(&q, Ag);
    }
    for (int i = q.bottom; i < q.top; i++)
    {
        printf("%d ", q.data[i]);
    }
    printf("\n");

    //��������ݳ�ջ�����ʣ������ 
    for (int i = 0; i < 5; i++)
    {
        Ag = i;
        Output(&q, Ag);
    }

    for (int i = q.bottom; i < q.top; i++)
    {
        printf("%d ", q.data[i]);
    }

    return 0;
}