#include<stdio.h>
int n;
int queue[15];
int front=-1;
int rear=-1;
void enqueue(int x)
{
	if((rear+1)%n==front)
	{
		printf("Overflow condition");
	}
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else
	{
		rear=(rear+1)%n;
		queue[rear]=x;
	}
}
void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf(" Underflow condition");
	}
	else if(front==rear)
	{
	//one element
		printf("%d is removed",queue[front]);
		front=rear=-1;
	}
	else
	{
		printf("%d is removed",queue[front]);
		front=(front+1)%n;
	}
}
void display()
{
	int i;
 	if(front=-1 && rear==-1)
 	{
 		printf("Queue is empty");
 	}
 	else
 	{
       for(int i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
 	}
 }
 
void main()
{
	int ch,s;
	printf("Enter the maxinum size\n");
	scanf("%d",&n);
	while(ch!=4)
	{
		printf("Choose the option according to the operation to be performed in cifcular queue");
		printf("\n1.enqueue");
		printf("\n2.dequeue");
		printf("\n3.display");
		printf("\n4.Exit ");
		printf("\n1.enter your option\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element to be added\n");
				scanf("%d",& s);
				enqueue(s);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Excited from the circular queue");
				break;
			default:
				printf("Invalid entry");
				break;
		}
	}
}
			
		
		
	
