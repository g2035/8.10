#include<stdio.h>
#include<stdbool.h>
#define maxsize 100 

//����ṹ��
typedef struct
{
    int data[maxsize];
    int front;
    int rear;
}queue;

//��������
bool IsEmpty(queue* q);
bool IsFull(queue* q);
void Input(queue* q, int e);
void Output(queue* q, int e);
