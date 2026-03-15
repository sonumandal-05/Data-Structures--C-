#include<stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

int main()
{
    int value,i;

    printf("Enter value to push: ");
    scanf("%d",&value);

    if(top == MAX-1)
    {
        printf("Stack Overflow");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("Element pushed into stack");
    }

    printf("\nStack elements are:\n");

    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }

    return 0;
}