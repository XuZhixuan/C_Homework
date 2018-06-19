#include <stdio.h>
#include <stdlib.h>

typedef int DataType;

typedef struct _Queue
{
	DataType* queArray;
	int front;
	int rear;
	int maxLength;
} Queue;

Queue* CreateQueue(int length);
void DestroyQueue(Queue* queue);
void ClearQueue(Queue* queue);
int GetQueueLength(Queue* queue);
void EnQueue(Queue* queue, DataType data);
DataType DlQueue(Queue* queue);

int main()
{
	Queue* queue = CreateQueue(3);

	EnQueue(queue, 3);
	EnQueue(queue, 4);
	EnQueue(queue, 5);
	
	for (int i = queue->front; i < queue->rear + 1; i++)
	{
		printf("%d\n", queue->queArray[i]);
	}

	DlQueue(queue);
	DlQueue(queue);

	for (int i = queue->front; i < queue->rear + 1; i++)
	{
		printf("%d\n", queue->queArray[i]);
	}

	DestroyQueue(queue);
	
	return 0;
}

Queue * CreateQueue(int length)
{
	Queue* queue = (Queue*)malloc(sizeof(Queue));
	if (queue)
	{
		queue->queArray = (DataType*)malloc(length * sizeof(DataType));

		if (queue->queArray == NULL)
		{
			return NULL;
		}
		queue->front = -1;
		queue->rear = -1;
		queue->maxLength = length;
	}

	return queue;
}

void DestroyQueue(Queue * queue)
{
	free(queue->queArray);
	free(queue);
	return;
}

void ClearQueue(Queue * queue)
{
	queue->front = -1;
	queue->rear = -1;
	return;
}

int GetQueueLength(Queue * queue)
{
	return queue->rear >= queue->front ?
		queue->rear - queue->front :
		queue->rear - queue->front + queue->maxLength;
}

void EnQueue(Queue* queue, DataType data)
{
	if ((queue->front == 0 && queue->rear == queue->maxLength - 1) ||
		(queue->rear == (queue->front - 1) % (queue->maxLength - 1)))
	{
		printf("\n队列已满");
		return;
	}
	else if (queue->front == -1) /* 插入首元素 */
	{
		queue->front = queue->rear = 0;
		queue->queArray[queue->rear] = data;
	}
	else if (queue->rear == queue->maxLength - 1 && queue->front != 0)
	{
		queue->rear = 0;
		queue->queArray[queue->rear] = data;
	}
	else
	{
		queue->rear++;
		queue->queArray[queue->rear] = data;
	}
}

DataType DlQueue(Queue * queue)
{
	if (queue->front == -1)
	{
		printf("\n队列为空");
		return INT_MIN;
	}

	int data = queue->queArray[queue->front];
	queue->queArray[queue->front] = -1;
	if (queue->front == queue->rear)
	{
		queue->front = -1;
		queue->rear = -1;
	}
	else if (queue->front == queue->maxLength - 1)
		queue->front = 0;
	else
		queue->front++;

	return data;
}