#include <stdio.h>
#define MAX 5

int stack[MAX] = {10, 20, 30};
int top = 2;

void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
        printf("Popped Element = %d\n", stack[top--]);
}

int main()
{
    pop();

    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);

    return 0;
}
