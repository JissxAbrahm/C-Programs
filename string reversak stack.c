#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = ch;
    }
}

char pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return '\0';
    }
    else
    {
        return stack[top--];
    }
}

int main()
{
    char str[MAX];
    int i;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        str[i] = pop();
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
