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

    //将十个数据入栈，输出入栈的所有数据
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

    //将五个数据出栈后输出剩余数据 
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