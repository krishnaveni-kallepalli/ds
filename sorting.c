#include<stdio.h>
#include<stdlib.h>
#define S 5
typedef struct sll
{
	int data;
	struct sll *link;
}l;
l *head=NULL;
void insert(int data)
{
	l *new=NULL,*temp=NULL;
	new=(l*)malloc(sizeof(l));
	if(new==NULL)
	{
		printf("mem not alloctaed\n");
	}
	else
	{

		if(head==NULL)
		{
			head=new;
		}
		else
		{
			temp=head;
			while(temp->link!=NULL)
			{
				temp=temp->link;
			}	
			temp->link=new;
		}
		new->data=data;
		new->link=NULL;
	}
}
void display()
{
	l *temp=head;
	if(temp==NULL)
	{
		printf("List Is empty\n");
	}
	while(temp)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
void sort()
{
	l *temp=head;
	int t;
	while(temp->link!=NULL)
	{
		l *temp1=temp->link;
		while(temp1)//comparing temp1 node with other nodes
		{
			if(temp->data > temp1->data)//swapping
			{
				t=temp->data;
				temp->data=temp1->data;
				temp1->data=t;		
			}
			temp1=temp1->link;
		}
		temp=temp->link;
	}
}
int main()
{
	int data,i,element;
	for(i=1;i<=S;i++)
	{
		printf("enter data : ");
		scanf("%d",&data);
		insert(data);
	}
	printf("Before Sorting\n");
	display();
	sort(head);
	printf("After sorting\n");
	display();
	return 0;
}
