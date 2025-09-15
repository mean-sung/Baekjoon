#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack
{
    int *data;
    int top;
} stack;

stack *InitStack();
void Push(stack *_stack, int data);
void Pop(stack *_stack);
void PrintSize(stack *_stack);
void PrintEmpty(stack *_stack);
void PrintTopElement(stack *_stack);

int main()
{
    stack *_stack = InitStack();

    int sizeOfInstruction;
    scanf("%d", &sizeOfInstruction);

    while (sizeOfInstruction--)
    {
        char instruction[10];
        scanf("%s", instruction);

        if (strcmp(instruction, "push") == 0)
        {
            int pushNum;
            scanf("%d", &pushNum);
            Push(_stack, pushNum);
        }
        else if (strcmp(instruction, "pop") == 0)
            Pop(_stack);
        else if (strcmp(instruction, "size") == 0)
            PrintSize(_stack);
        else if (strcmp(instruction, "empty") == 0)
            PrintEmpty(_stack);
        else if (strcmp(instruction, "top") == 0)
            PrintTopElement(_stack);
    }
    free(_stack->data);
    free(_stack);

    return 0;
}

stack *InitStack()
{
    stack *_stack = (stack *)malloc(sizeof(stack));
    _stack->data = (int *)malloc(sizeof(int) * 10000);
    _stack->top = -1;

    return _stack;
}

void Push(stack *_stack, int data)
{
    _stack->top++;
    _stack->data[_stack->top] = data;
}

void Pop(stack *_stack)
{
    if (_stack->top >= 0) // top == 0 -> 데이터 하나가 존재
    {
        int popedNum = _stack->data[_stack->top];
        printf("%d\n", popedNum);
        _stack->top--;
    }
    else
        printf("-1\n");
}

void PrintSize(stack *_stack)
{
    printf("%d\n", _stack->top + 1);
}

void PrintEmpty(stack *_stack)
{
    if (_stack->top == -1)
    {
        printf("1\n");
    }
    else
        printf("0\n");
}

void PrintTopElement(stack *_stack)
{
    if (_stack->top == -1)
        printf("-1\n");
    else
        printf("%d\n", _stack->data[_stack->top]);
}