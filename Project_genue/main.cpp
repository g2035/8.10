#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<stdint.h>
#include"queue.h"


int main()
{
    queue q;
    q.front = 0;
    q.rear = 0;
    int Ag;

    //将十个数据入队，输出入队的所有数据
    for (int i = 0; i <10; i++)
    {
        Ag = i;
        Input(&q, Ag);
    }
    for (int i = q.front; i < q.rear; i++)
    {
        printf("%d ",q.data[i]);
    }
    printf("\n");

    //将五个数据出队后输出剩余数据 
    for (int i = 0; i < 5; i++)
    {
        Ag = i;
        Output(&q, Ag);
    }

    for (int i = q.front; i < q.rear; i++)
    {
        printf("%d ", q.data[i]);
    }

    return 0;
}