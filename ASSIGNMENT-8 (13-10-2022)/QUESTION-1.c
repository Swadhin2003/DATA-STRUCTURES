#include <stdio.h>
#define MAX 5
int cqueue[MAX];
int front = -1;
int rear = -1;
void insert(int item)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Queue Overflow");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if (rear == MAX - 1)
            rear = 0;
        else
            rear = rear + 1;
    }
    cqueue[rear] = item;
}
void deletion()
{
    if (front == -1)
    {
        printf("Queue Underflow");
        return;
    }
    printf("Element deleted from queue is:%d \n", cqueue[front]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        if (front == MAX - 1)
            front = 0;
        else
            front = front + 1;
    }
}
void display()
{
    int fpos = front, rpos = rear;
    if (front == -1)
    {
        printf("Queue is empty");
        return;
    }
    printf("Queue elements:\n");
    if (fpos <= rpos)
        while (fpos <= rpos)
        {
            printf("%d ", cqueue[fpos]);
            fpos++;
        }
    else
    {
        while (fpos <= MAX - 1)
        {
            printf("%d ", cqueue[fpos]);
            fpos++;
        }
        fpos = 0;
        while (fpos <= rpos)
        {
            printf("%d ", cqueue[fpos]);
            fpos++;
        }
    }
    printf("\n");
}
int main()
{
    int choice, item;
    do
    {
        printf("\n1.Insertion");
        printf("\n2.Deletion");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Input the element for insertion in queue:");
            scanf("%d", &item);
            insert(item);
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Invalid choice");
        }
    } 
    while (choice != 4);
    return 0;
}