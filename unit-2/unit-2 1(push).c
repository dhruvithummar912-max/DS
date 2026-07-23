#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int value)
{
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        top++;
        stack[top] = value;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);

    return 0;
}
