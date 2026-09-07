#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;

int isFull()
{
    return (rear == MAX - 1);
}

int isEmpty()
{
    return (front == -1 || front > rear);
}

void enqueue(int value)
{
    if (isFull())
    {
        printf("Queue Overflow! Cannot insert %d\n", value);
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;
    printf("%d inserted into queue\n", value);
}

void dequeue()
{
    if (isEmpty())
    {
        printf("Queue Underflow! Queue is empty\n");
        return;
    }

    printf("%d deleted from queue\n", queue[front]);
    front++;

    if (front > rear)
    {
        front = rear = -1;
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void peek()
{
    if (isEmpty())
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Front element: %d\n", queue[front]);
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n----- Queue Menu -----\n");
        printf("1. Enqueue (Insert)\n");
        printf("2. Dequeue (Delete)\n");
        printf("3. Display Queue\n");
        printf("4. Peek (Front element)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &value);
            enqueue(value);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            peek();
            break;

        case 5:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
