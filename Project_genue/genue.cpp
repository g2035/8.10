#include"queue.h"
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
//�ж϶����Ƿ�Ϊ��
bool IsEmpty(queue* q)
{
    if (q->front == q->rear)
        return true;
    else
        return false;
}

//�ж϶����Ƿ�Ϊ��
bool IsFull(queue* q)
{
    if ((q->rear + 1) % maxsize == q->front)
        return true;
    else
        return false;
}

//������д�����
void Input(queue* q, int e)
{
    if (IsFull(q))
        printf("Queue is full\n");
    else
    {
        q->data[q->rear] = e;
        q->rear = (q->rear + 1) % maxsize;
    }
}

//�Ӷ�����ȡ������
void Output(queue* q, int e)
{
    if (IsEmpty(q))
        printf("Queue is empty\n");
    else
    {
        e = q->data[q->front];
        q->front = (q->front + 1) % maxsize;
    }
}