#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

// Push function
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = value;
}

// Pop function
int pop() {
    if (top == -1) {
        return -1;
    }
    return stack[top--];
}

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    // Push numbers from n to 1 onto the stack
    for (i = n; i >= 1; i--) {
        push(i);
    }

    // Pop and multiply
    while (top != -1) {
        factorial *= pop();
    }

    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
