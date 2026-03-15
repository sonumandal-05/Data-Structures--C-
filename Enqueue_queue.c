#include<stdio.h>

#define MAX 5

int queue[MAX];
int rear = -1;

int main()
{
    int value,i;

    printf("Enter value to insert: ");
    scanf("%d",&value);

    if(rear == MAX-1)
    {
        printf("Queue Overflow");
    }
    else
    {
        rear++;
        queue[rear] = value;
        printf("Element inserted in queue\n");
    }

    printf("Queue elements are:\n");

    for(i=0;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }

    return 0;
}