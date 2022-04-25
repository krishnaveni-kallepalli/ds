#include<stdio.h>
#include<stdlib.h>
#define node_size 5
typedef struct node
{
	int data;
	struct node *link;
	
}slist;
void push(slist **top_arg,int ndata)
{
	slist *new=malloc(sizeof(slist));
	if(new==NULL)
	{
		printf("Memory not allocated\n");
	}
	else
	{
		new->data=ndata;
		new->link=NULL;
		if(*top_arg==NULL)
		{
			*top_arg=new;
		}
		else
		{
			new->link=*top_arg;
			*top_arg=new;
		}
		printf("Insert:%d\n",new->data);
	}
}
void pop(slist **top_arg)
{
	if(*top_arg==NULL)
	{
		("stack is empty\n");
	}
	else
	{
		slist *temp=*top_arg;
		*top_arg=temp->link;
		printf("Deleted element is :%d\n",temp->data);
		free(temp);
	}
}
void peek(slist **top)
{
	if(*top==NULL)
	{
		printf("stack is empty\n");
	}
	slist *temp=*top;
	printf("Topmost element is:%d\n",temp->data);
}
void display(slist **top)
{
	if(*top==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
		printf("stack elements are :");
		slist *temp =*top;
		while(temp!=NULL)
		{
			printf("%d",temp->data);
			temp=temp->link;
		}
		printf("\n");
	}
	
}

int main()
{
	slist *top=NULL;
	push(&top,10);
	push(&top,20);
	push(&top,30);
	peek(&top);
	display(&top);
	pop(&top);
	display(&top);
}
