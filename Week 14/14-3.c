#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char DataType;

typedef struct _Stack
{
	DataType* stackArray;
	int top;
	int capacity;
} Stack;

Stack* CreateStack(int length);
void ClearStack(Stack* stack);
void DestroyStack(Stack* stack);
void Push(Stack* stack, DataType data);
int GetLength(Stack* stack);
int IsFull(Stack* stack);
int IsEmpty(Stack* stack);
DataType Pop(Stack* stack);
DataType GetStackPeek(Stack* stack);

int main()
{

	const max_length = 1000;
	char input[1000];
	int flag = 1;

	Stack* brackets = CreateStack(max_length);
	gets_s(input, 1000);

	for (int i = 0; i < strlen(input); i++)
	{
		if (input[i] == '(')
		{
			Push(brackets, '(');
		}
		if (input[i] == ')')
		{
			if (Pop(brackets) != '(')
			{
				flag = 0;
				break;
			}
		}
	}

	if (!IsEmpty(brackets))
	{
		flag = 0;
	}

	printf(flag == 1 ? "YES" : "NO");

	DestroyStack(brackets);

	return 0;
}

Stack * CreateStack(int length)
{
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	if (stack)
	{
		stack->stackArray = (DataType*)malloc(length * sizeof(DataType));
		if (stack->stackArray == NULL)
		{
			return NULL;
		}
	}
	stack->capacity = length;
	stack->top = -1;
	return stack;
}

void ClearStack(Stack * stack)
{
	stack->top = -1;
}

void DestroyStack(Stack * stack)
{
	free(stack->stackArray);
	free(stack);
}

DataType Pop(Stack * stack)
{
	if (IsEmpty(stack))
	{
		return INT_MIN;
	}
	return stack->stackArray[stack->top--];
}

void Push(Stack * stack, DataType data)
{
	if (IsFull(stack))
	{
		return;
	}
	stack->stackArray[++stack->top] = data;
}

int GetLength(Stack * stack)
{
	return stack->top + 1;
}

int IsFull(Stack * stack)
{
	return stack->top == stack->capacity - 1;
}

int IsEmpty(Stack * stack)
{
	return stack->top == -1;
}

DataType GetStackPeek(Stack * stack)
{
	if (IsEmpty(stack))
	{
		return INT_MIN;
	}
	return stack->stackArray[stack->top];
}
