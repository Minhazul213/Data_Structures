#include <stdio.h>

#include <stdlib.h>

#define size 4

int top = -1, Stack[size];
void push();
void pop();
void display();

int main()
{
    int ch;
       printf("\nPerform operations on the stack:");
        printf("\n 1.Display Operation :");
        printf("\n 2.Pop Operation :");
        printf("\n 3.Push Operation:");
        printf("\n 4.Exit:");

    while (1)
    {

        printf("\n\nEnter the choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
             display();
            break;
        case 2:
            pop();
            break;
        case 3:
             push();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int x;

    if (top == size - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top = top + 1;
        Stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: [%d]", Stack[top]);
        top = top - 1;
    }
}

void display()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
            printf("%d", Stack[i]);
    }
}
