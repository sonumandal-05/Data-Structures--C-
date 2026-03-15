#include<stdio.h>

#define MAX 5

int stack[MAX] = {10,20,30};
int top = 2;

int main()
{
    int item;

    if(top == -1)
    {
        printf("Stack Underflow");
    }
    else
    {
        item = stack[top];
        top--;
        printf("Deleted element = %d",item);
    }

    return 0;
}