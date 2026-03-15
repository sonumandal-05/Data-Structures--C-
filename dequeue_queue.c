#include<stdio.h>

#define MAX 5

int queue[MAX] = {10,20,30};
int front = 0, rear = 2;

int main()
{
    int item;

    if(front > rear)
    {
        printf("Queue Underflow");
    }
    else
    {
        item = queue[front];
        front++;
        printf("Deleted element = %d",item);
    }

    return 0;
}