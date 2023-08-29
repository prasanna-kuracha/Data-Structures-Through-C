//implementation queue data structure using arrays
//enque is a insert_at_tail
//deque is a delete_at_head
#include<stdio.h>
int queue[100],front=-1,rear=-1,max_size;
void enque(int val)
{
	if(rear==max_size-1)
	{
		printf("Queue is full\n");
	}
	else if(front==-1 && rear==-1)
	{
		front++;
		rear++;
		queue[rear]=val;
	}
	else
	{
		queue[++rear]=val;
	}
}
void display()
{
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty\n");
		return;
	}
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("%d \n",queue[i]);
	}
}
int deque()
{
	if(front==-1 && rear==-1)
	{
		return -1;
	}
	else if(front==rear)
	{
		int de=queue[rear];
		rear=-1;
		front=-1;
		return de;
	}
	else
	{
		int de=queue[front];
		front++;
		return de;
	}
}
int main()
{
	printf("Enter maximum of size of queue: ");
	scanf("%d",&max_size);
	int choice;
	while(1)
	{
		printf("Enter\n1.Enque\n2.Deque\n3.Display \nother to exit");
		scanf("%d",&choice);
	
	if(choice==1)
	{
		//enque()
		int val;
		printf("Enter value: ");
		scanf("%d",&val);
		enque(val);
	}
	else if(choice==2)
	{
		//deque()
	 int res=deque();
		if(res==-1)
		{
			printf("Queue is empty\n");
		}
		else
		{
			printf("%d is deleted\n",res);
		}
	}
	else if(choice==3)
	{
		//display()
		display();
	}
	else
	{
        printf("THANKS");
	}
}
}
