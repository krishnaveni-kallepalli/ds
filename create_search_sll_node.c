//create,displaying data SLL

#include<stdio.h>
#include<stdlib.h>
#define node_size 5
typedef struct node
{
	int data;
	struct node *link;
}slist;

slist *head=NULL;

//creation of ll
void insert(int data)
{
	slist *new=malloc(sizeof(slist));//new variable at heap
	if(new==NULL)
	{
		printf("Memory allocation failed\n");
	}
	else
	{
		new->data=data;
		new->link=NULL;
		if(head==NULL)
		{
			head=new;//head contains address of first node
		}
		//extend link btw 2 nodes
		//if atleast one node present
		else
		{
			slist *temp=head;//temp pointes to head
			while(temp->link != NULL)//find last node which is null
			{
				temp=temp->link;//traverse till last node
			}
			temp->link=new;
		}
		//new->data=data;
		//new->link=NULL;//update data
		
	}
	
}

void display()
{
	slist *temp=head;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(temp!=NULL)//print data till the last node
		{
			printf("%d\n",temp->data);
			temp=temp->link;
		}
		printf("\n");
	}
}


void search(int element)
{
	if(head==NULL)//temp pointing to head
	{
		printf("LL empty\n");
	}
	else
	{
		slist *temp=head;
		while(temp!=NULL)//traversing till temp becomes null
		{
			if(temp->data==element)
			{
				printf("Element found\n");
			}
			else
			{
				temp=temp->link;//move to next node
			}
			printf("Element not found\n");
		}
		
	}
}
//connect links 
int main()
{
	int i,element;
	slist *head=NULL;
	int data;
	for(i=0;i<node_size;i++)//creates 5 nodees & inserting data
	{
	printf("enter data:\n");
	scanf("%d",&data);
	insert(data);
	}
	display();
	search(element);
}
