#include"stack.h"
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
//判断栈是否为空
bool IsEmpty(stack* q)
{
    if (q->top == q->bottom)
        return true;
    else
        return false;
}

//判断栈是否为满
bool IsFull(stack* q)
{
    if ((q->top>=maxsize))
        return true;
    else
        return false;
}

//把数据写入栈
void Input(stack* q, int e)
{
    if (IsFull(q))
        printf("Queue is full\n");
    else
    {
        q->data[q->top] = e;
        q->top = q->top + 1;
    }
}

//从栈中取出数据
void Output(stack* q, int e)
{
    if (IsEmpty(q))
        printf("Queue is empty\n");
    else
    {
        e = q->data[q->top];
        q->top = q->top - 1;
    }
}