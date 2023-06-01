#include<stdio.h>
#include<stdlib.h>
#define max 5
int cqueue[max];
int front=-1,rear=-1;

//Check if the queue is full
int isFull()
{
    if((front==rear+1)  ||  (front==0 && rear==(max-1)))
        {return 1;}
    else
        {return 0;}
}


//Check if queue is empty
int isEmpty()
{
    if(front==-1)
        return 1;
    else
        return 0;
}

//Adding an element;
void enqueue(int ele)
{
    if(isFull()==1)
        printf("Queue is full\n");
    else
    {
        if(front==-1)
        front=0;
    rear=(rear+1)%max;
    cqueue[rear]=ele;
    printf("Inserted ->%d",ele);
    }
}

//Removing element
void dequeue()
{
    int ele;
    if(isEmpty()==1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        ele=cqueue[front];
    if(front==rear)
    {
        front=-1;                      //Queue has only 1 element left so we reserit
        rear=-1;
    }
    else
    {
        front=(front+1)%max;
    }
    printf("Deleted item ->%d\n",ele);
    }
}
void disp()
{
    int i;
    if(isEmpty()==1)
    {
        printf("Queue is empty\n");
        return 1;
    }
    else
    {
        printf("Front->%d\n",front);
    printf("items->");
    for(i=front;i!=rear;i=(i+1)%max)
    {
        printf("%d ",cqueue[i]);
    }
    printf("%d",cqueue[i]);
    printf("\nRear->%d\n",rear);
    }
}
main()
{
    int ch,ele;
    do
    {
        printf("\nChoose from the below\n");
        printf("1>Enqueue\n2>Dequeue\n3>Display\n4>Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
                printf("Enter the element to be inserted\n");
                scanf("%d",&ele);
                enqueue(ele);
                break;
        case 2:
                dequeue();
                break;
        case 3:
                disp();
                break;
        case 4:
               printf("Thank you....\n");
               break;
        default:
               printf("Invalid choice\n");
               break;

        }
    }while(ch!=4);
}

