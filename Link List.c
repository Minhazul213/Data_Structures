#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main ()
{
    int choice,item;
    printf("\n 1: Insert Opetation ");
    printf("\n 2: Display Opetation ");
    printf("\n 3: Exit  ");
    while(1)
    {
        printf("\n\n Enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("\nEnter the item :");
            scanf("%d",&item);
            create(item);
            break;
        case 2:
            traverse();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\nPlease enter valid choice\n");
        }

    }
}
void create(int item)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n** Your inserted Values** [%d]\n",item);
    }

}
void traverse()
{
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("There are currently no values in your list. Empty list..");
    }
    else
    {
        printf("\n .............printing values .......... :  ");
        while (ptr!=NULL)
        {
            printf("%2d",ptr->data);
            ptr = ptr -> next;
        }

    }
}

