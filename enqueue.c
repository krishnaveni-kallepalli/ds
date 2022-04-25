#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;
}queue;

void enqueue(int data,queue **front_arg,queue **rear_arg)
{
    queue *new=(queue *)malloc(sizeof(queue));
    if(new==NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        new->data=data;
        new->link=NULL;
        if(*front_arg==NULL && *rear_arg==NULL)
        {
            *front_arg=new;
            *rear_arg=new;
        }
        else
        {
            (*rear_arg)->link=new;
            *rear_arg=new;
        }
        printf("Enqueued element is %d\n",(*rear_arg)->data);
    }
}

int main()
{
    queue *front=NULL,*rear=NULL;
    enqueue(10,&front,&rear);
    enqueue(20,&front,&rear);
    enqueue(30,&front,&rear);
}

