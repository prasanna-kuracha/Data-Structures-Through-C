#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;
};
typedef struct node NODE;
NODE *head=NULL;
void insert_at_head(NODE *nn)
{
	if(head==NULL)
	{
		head=nn;
	}
	else
	{
		nn->next=head;
		head=nn;
	}
}
void insert_at_tail(NODE *nn)
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
void delete_at_head()
{
	if(head==NULL)
	{
		printf("NO NODES\n");
	}
	else
	{
		printf("%d is deleted: \n",head->data);
		NODE *dn=head;//storing to be deleted node in dn variable to free
		head=head->next;
		free(dn); //deallocating memory
		/* NODE *temp=head;
		temp=head->next;
		head=NULL;
		head=temp; */
	}
}
void delete_at_end()
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
void insert_at_pos(NODE * nn, int pos)
{
	if(pos==1)
	{
		insert_at_head(nn);
	}
	else{
		NODE *temp=head;
		int c=1;
		while(c<pos-1)
		{
			c++;
			temp=temp->next;	
		}
		//printf("printing current position %d \n:",c);
		nn->next=temp->next;
		temp->next=nn;
	}
}
void delete_at_pos(int pos)
{
	
}
int main()
{
	while(1)
	{
		int choice;
		printf("1.insert at head 2.insert at tail 3.delete at head 4.delete at tail 5. insert at position 6.delete at position 7.display : ");
		scanf("%d",&choice);
		if(choice==1)
		{
			//insert at head
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
		    NODE *nn= (NODE *)malloc(sizeof(NODE));
			nn->data=val;
			nn->next=NULL;
			insert_at_head(nn);
		}
		else if(choice==2)
		{
			//insert at tail
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
		    NODE *nn= (NODE *)malloc(sizeof(NODE));
			nn->data=val;
			nn->next=NULL;
			insert_at_tail(nn);
			
		}
		else if(choice==3)
		{
			//delete at head
			delete_at_head();
		}
		else if(choice==4)
		{
			//delete at tail
			delete_at_end();
		}
		else if(choice==5)
		{
			//insert at position
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
		    NODE *nn= (NODE *)malloc(sizeof(NODE));
			nn->data=val;
			nn->next=NULL;
			int pos;
			printf("Enter the position to insert the node: ");
			scanf("%d",&pos);
			insert_at_pos(nn,pos);
		}
		else if(choice==6)
		{
			//delete at position
			int pos;
			printf("Enter the position to insert the node: ");
			scanf("%d",&pos);
			delete_at_pos(pos);
		}
		else if(choice==7)
		{
			//display
			display();
		}
		else
		{
			printf("Get the hell out of here!!!!\n");
			break;
		}
	}
}

