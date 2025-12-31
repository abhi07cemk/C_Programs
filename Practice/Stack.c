#include<stdio.h>
#include <stdlib.h>
#define size 5

int stack[size];
int top = -1;

void Push(int x)
{
	if(top == size - 1 )
	{
		printf("Stack OverFlow and Exit...!!");
	}
	else
	{
		top++;
		stack[top] = x;
		printf("%d is Inserted", x);
	}
}
void Pop()
{
	if(top == -1)
	{
		printf("Stack Underflow");
	}
	else{
		printf("%d popped from stack.\n", stack[top]);
        top--;
	}
}
void Peek()
{
	if(top == -1)
	{
		printf("Stack is Empty");
	}
	else
	{
		printf("Top Element of Stack is : %d", stack[top]);
	}
}
void Display()
{
	if(top == -1)
	{
		printf("Stack is Empty");
	}
	else
	{
		printf("Stack Elements : ");
		for(int i = top; i>=0; i--)
		{
			printf("%d ", stack[i]);
		}
		printf("\n");
	}
}

int main()
{
	int choice, value;
	  while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            Push(value);
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peek();
            break;
        case 4:
            Display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}




