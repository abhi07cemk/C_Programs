#include<stdio.h>
#define size 5

int stack[size];
int top = -1;

void push(int value)
{
	if(top ==  size - 1)
	{
		printf("Stack Overflow! Cannot Push Value");
	}
	else
	{
		stack[++top] = value;
		printf("%d pushed into Stack", value);
	}
}
void pop()
{
	if(top == -1)
	{
		printf("Stack UnderFlow!");
	}
	else
	{
		printf("%d Popped from Stack", stack[top--]);
	}
}
void peek()
{
	if(top == -1)
	{
		printf("Stack UnderFlow!");
	}
	else
	{
		printf("Top Element of Stack is : %d", stack[top]);
	}
}
void display()
{
	if(top == -1)
	{
		printf("Stack is Empty!");
	}
	else
	{
		for(int i = top;  i>=0; i--)
		{
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}

int main()
{
	int choice, value;
	while(1)
	{
		printf("\n--- Stack Menu ---\n");
		printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit");
		printf("\nEnter Your Choice :  ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter Value to  Push : ");
				scanf("%d",&value);
				push(value);
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				display();
				break;
			case 5:
				printf("Exitining...\nExited");
				return 0;
			default:
				printf("Invalid Chocie! Try Again\n");
		}
	}
}
