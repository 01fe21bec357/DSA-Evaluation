#include<stdio.h>
#include<stdlib.h>
#define size 100
struct Queue
{
  int queue[size];
  int front,rear;
};
front=-1;
rear=-1;
//int queue[size],front=-1,rear=-1;
void enqueue()
{
    int queue;
    int item;
    printf("Enter integer data to be inserted\n");
    scanf("%d",&item);
    if(rear==size-1)
    {
        printf("Overflow\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=item;
    }
}
void dequeue()
{
    int x;
    if(front==-1 || front>rear)
    {
        printf("Underflow\n");
        front=-1;rear=-1;
    }
    else
    {
        x=queue[front];
        front++;
        printf("Deleted %d\n",x);
    }
}
void show()
{
    if(front==-1 || front>rear)
        printf("Empty Queue\n");
    else
    {
        printf("Queue:\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
void main()
{
    int choice;
    for(;;)
    {
        printf("1 - Enqueue\n2 - Dequeue\n3 - Display\n4 - Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 : enqueue();break;
            case 2 : dequeue();break;
            case 3 : show();break;
            case 4 : exit(0);break;
            default : printf("Enter valid choice\n");
        }
    }
}

