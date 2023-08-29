#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *head=NULL;
void enque(NODE *nn)
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
void deque()
{
	if(head==NULL)
	{
		printf("NO NODES\n");
	}
	else
	{
		printf("%d is deleted \n",head->data);
		NODE *dn=head;//storing to be deleted node in dn variable to free
		head=head->next;
		free(dn); //deallocating memory
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
		printf("1.Enque\n2.Deque\n3.Display\n");
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
			enque(nn);
		}
		else if(ch==2)
		{
			//deque
			deque();
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
