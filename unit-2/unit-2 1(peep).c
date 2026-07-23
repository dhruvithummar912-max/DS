#include <stdio.h>
#define MAX 5

int stack[MAX] = {10, 20, 30, 40, 50};
int top = 4;

void peep(int pos)
{
    int index = top - pos + 1;

    if (index < 0 || index > top)
        printf("Invalid Position\n");
    else
        printf("Element = %d\n", stack[index]);
}

int main()
{
    peep(3);
    return 0;
}
