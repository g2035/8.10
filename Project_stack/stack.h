#include<stdio.h>
#include<stdbool.h>
#define maxsize 100

//定义结构体
typedef struct
{
    int data[maxsize];
    int top;
    int bottom;
}stack;

//函数声明
bool IsEmpty(stack* q);
bool IsFull(stack* q);
void Input(stack* q, int e);
void Output(stack* q, int e);
#pragma once
