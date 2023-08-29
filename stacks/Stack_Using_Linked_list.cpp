#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *head=NULL;
void push(NODE *nn)
{
	if(head==NULL)
	{
		head=nn;
	}
	else
	{
		NODE *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=nn; //inserting new node at tail
	}
}
void pop()
{
	if(head==NULL) //list is empty
	{
		printf("No nodes\n");
	}
	else if(head->next==NULL) // list is containing single node
	{
		printf("Deleted element is %d\n",head->data);
		head=NULL;
	}
	else //list is containing more than 1 node
	{ 
	  NODE *temp=head;
	  while(temp->next->next!=NULL)
	  {
	  	temp=temp->next;
	  }
	  printf("DEleted element is %d\n",temp->next->data);
	  NODE *dn=temp->next;
	  temp->next=NULL;
	  free(dn);
	}
}
void display()
{
	if(head==NULL)
	{
		printf("NO NODES\n");
		return;
	}
	NODE *temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}

int main()
{
	while(1)
	{
		int ch;
		printf("1.Push\n2.Pop\n3.Display\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			//Enque
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
		    NODE *nn= (NODE *)malloc(sizeof(NODE));
			nn->data=val;
			nn->next=NULL;
			push(nn);
		}
		else if(ch==2)
		{
			//deque
			pop();
		}
		else if(ch==3)
		{
			//display
			display();
		}
		else
		{
			break;
		}
	}
}
