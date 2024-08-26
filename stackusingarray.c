#include<stdio.h>
int n;
int x;
int stack[15];
int top=-1;
void push(int x)
{
	if(top==n-1)
		printf("Overflow condition");
	else 
	{
		++top;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
		printf("Underflow condition");
	else
	{
		x=stack[top];
		printf("%d is removed from the stack",stack[top]);
		top--;
	}
}
void display()
{
	if(top==-1)
		printf("Stack is empty");
	else
	{
		for(int i=top;i>0;i--)
			printf("%d\n",stack[i]);
			
	}
}
void main()
{
	int ch=0,h;
	printf("Enter the maximum size of the stack");
	scanf("%d",&n);
    while(ch!=4)
    {
    printf("\nenter the process you want to do\n1.push\n2.pop\n3.display\n4.Exit\n" );
    printf("Enter your choice\n");
    scanf("%d",&ch);
    switch(ch)
         {
             case 1:
             		printf("Enter the number to be pushed");
             		scanf("%d",&h);
                	push(h);
               		 break;
            case 2:
               		 pop();
                	 break;
            case 3:
               		 display();
               		  break;
            default:
               		 printf("invalid entrance\n");
               		 break;
        
             }
     }
 }
