#include"stack.h"
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
//�ж�ջ�Ƿ�Ϊ��
bool IsEmpty(stack* q)
{
    if (q->top == q->bottom)
        return true;
    else
        return false;
}

//�ж�ջ�Ƿ�Ϊ��
bool IsFull(stack* q)
{
    if ((q->top>=maxsize))
        return true;
    else
        return false;
}

//������д��ջ
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

//��ջ��ȡ������
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