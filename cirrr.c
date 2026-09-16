#include <stdio.h>
#include <stdbool.h>

#define MAXSIZE 5

int queue[MAXSIZE];
int front = 0;
int rear = 0;
int count = 0;

//-------------------- Enqueue --------------------
void enqueue(int data)
{
    if (count == MAXSIZE)
    {
        printf("\nOVERFLOW: Queue is Full! Cannot insert %d.\n", data);
        return;
    }

    queue[rear] = data;
    rear = (rear + 1) % MAXSIZE;
    count++;
    printf("\nElement %d inserted successfully.\n", data);
}

//-------------------- Dequeue --------------------
int dequeue()
{
    if (count == 0)
    {
        printf("\nUNDERFLOW: Queue is Empty.\n");
        return -1;
    }

    int data = queue[front];
    front = (front + 1) % MAXSIZE;
    count--;
    return data;
}

//-------------------- Peek --------------------
void peek()
{
    if (count == 0)
    {
        printf("\nQueue is Empty.\n");
        return;
    }

    printf("\nFront element = %d\n", queue[front]);
}

//-------------------- Display --------------------
void display()
{
    if (count == 0)
    {
        printf("\nQueue is Empty.\n");
        return;
    }

    printf("\nQueue Elements : ");
int i;
    for (i = 0; i < count; i++)
        printf("%d ", queue[(front + i) % MAXSIZE]);

    printf("\n");
}

//-------------------- Main --------------------
int main()
{
    int choice, value, deleted ,i;

    while (true)
    {
        printf("\n------ CIRCULAR QUEUE MENU ------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value : ");
            scanf("%d", &value);
            enqueue(value);
            break;

        case 2:
            deleted = dequeue();
            if (deleted != -1)
                printf("\nDeleted element = %d\n", deleted);
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            printf("\nProgram Ended.\n");
            return 0;

        default:
            printf("\nInvalid Choice.\n");
        }
    }

    return 0;
}
