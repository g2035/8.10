#include<stdio.h>
#include<stdbool.h>
#define maxsize 100 

//定义结构体
typedef struct
{
    int data[maxsize];
    int front;
    int rear;
}queue;

//函数声明
bool IsEmpty(queue* q);
bool IsFull(queue* q);
void Input(queue* q, int e);
void Output(queue* q, int e);
