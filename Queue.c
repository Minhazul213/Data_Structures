#include <stdio.h>
# define size 100
void enqueue();
void dequeue();
void display();
int Queue[size];
int Rear = - 1;
int Front = - 1;
int main()
{
    int ch;

    printf("1.Display the Queue\n");
    printf("2.Enqueue Operation\n");
    printf("3.Dequeue Operation\n");
    printf("4.Exit\n");
    while (1)
    {

        printf("\nEnter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display();
            break;
        case 2:
            enqueue();

            break;
        case 3:
            dequeue();
            break;
        case 4:
            exit(0);
        default:
            printf("Incorrect choice \n");
        }
    }
    return 0;
}

void enqueue()
{
    int data;
    if (Rear == size - 1)
        printf("queue is full,Can not insert the value : \n");
    else
    {
        if (Front == - 1)

            Front = 0;
        printf("Enter element to be inserted in the Queue : ");
        scanf("%d", &data);
        Rear = Rear + 1;
        Queue[Rear] = data;
    }
}

void dequeue()
{
    if (Front == - 1 || Front > Rear || Front== Rear)
    {
        printf("Queue is Underflow, Can not deletee the value \n");

    }
    else
    {
        printf("Element deleted from the Queue: [%d]\n", Queue[Front]);
        Front = Front + 1;
    }
}

void display()
{

    if (Front == - 1)
        printf("\n\t****Currentlly queue is empty****  \n");
    else
    {
        printf("You have the Queue element :: ");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", Queue[i]);
        printf("\n");
    }
}
