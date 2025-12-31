#include<stdio.h>
#define size 5

int queue[size];
int front = -1, rear = -1;

void enqueue(int value)
{
	if(rear == size -1)
	{
		printf("Overflow");
	}
	else
	{
		if(front == -1)  front = 0;
		queue[++rear] = value;
		printf("%d Inserted into queue \n ", value);
	}
}

void dequeue()
{
	if(front == -1 || front > rear)
	{
		printf("Underflow");
	}
	else
	{
		printf("%d removed from queue\n", queue[front++]);
	}
}

void display()
{
	if(front == -1 || front > rear)
	{
		printf("Queue is Empty");
	}
	else
	{
		printf("Queue Elements : \n");
		for(int i = front; i<=rear; i++)
		{
			printf("%d ", queue[i]);
		}
		printf("\n");
	}
}

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	display();
	
	dequeue();
	display();
	dequeue();
	
	enqueue(50);
	enqueue(80);
	display();
}
