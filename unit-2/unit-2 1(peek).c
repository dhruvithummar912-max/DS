#include <stdio.h>
#define MAX 5

int stack[MAX] = {10, 20, 30};
int top = 2;

void peek()
{
    if (top == -1)
        printf("Stack is Empty\n");
    else
        printf("Top Element = %d\n", stack[top]);
}

int main()
{
    peek();
    return 0;
}
