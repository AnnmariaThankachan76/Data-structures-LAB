
# include<stdio.h>
# include<stdlib.h>
struct node
    {
        int data;
        struct node*link;
    };
struct node *current,*head= NULL;
void createnode()
{
    struct node*newnode=(struct node *) malloc(sizeof(struct node));
    printf("enter the value\n");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    if(head==NULL)
    {
        head=newnode;
        current=newnode;
    }
    else
    {
        current->link=newnode;
        current=newnode;
    }
    printf("node successfully created\n");
}
void display()
{
    if(head==NULL)
    {
        printf("list is empty\n");
    }
    else
    {
        printf("the linked list is\n");
        struct node*temp=head;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }
       // printf("NULL");

    }
}
void insertionnodefront()
{
   struct node*ptr=(struct node*) malloc(sizeof(struct node));
   printf("enter the value\n");
   scanf("%d",&ptr->data);
   ptr->link=head;
   head=ptr;
   printf("node inserted at front successfully\n");

}
void insertionnodeend()
{
   struct node*ptr1=(struct node*) malloc(sizeof(struct node));
   printf("enter the value\n");
   scanf("%d",&ptr1->data);
   ptr1->link=NULL;
   struct node*temp=head;
   while(temp->link!=NULL)
   {
       temp=temp->link;
   }
   temp->link=ptr1;
   printf("node inserted at end successfully\n");

}
void insertionnodeany()
{
   struct node*ptr2=(struct node*) malloc(sizeof(struct node));
   int key,i=1;
   printf("enter the value\n");
   scanf("%d",&ptr2->data);
   struct node*temp=head;
   printf("enter the position to be inserted\n");
   scanf("%d",&key);
   key--;
   while(i<key)
   {
       temp=temp->link;
       i++;
   }
   ptr2->link=temp->link;
   temp->link=ptr2;
   printf("node inserted at any position successfully done\n");
}
void deletionnodefront()
{
    if (head==NULL)
    {
        printf("link list empty\n");
    }
    else if (head->link==NULL)
    {
        struct node*temp=head;
        head=NULL;
        free(temp);
    }
    else
    {
        struct node*temp=head;
        head=temp->link;
        free(temp);
    }
    printf("node successfully deleted from front\n");
}
void deletionnodeend()
{
    if (head==NULL)
    {
        printf("link list empty\n");
    }
    else if (head->link==NULL)
    {
        struct node*temp=head;
        head=NULL;
        free(temp);
    }
    else
    {
         struct node*temp1=head;
         struct node*temp2=head;
         while(temp1->link!=NULL)
         {
             temp2=temp1;
             temp1=temp1->link;
         }
         temp2->link=NULL;
         free(temp1);
    }
    printf("node successfully deleted from end\n");
}
void deletionnodeany()
{
    if (head==NULL)
    {
        printf("link list empty\n");
    }
    else if (head->link==NULL)
    {
        struct node*temp=head;
        head=NULL;
        free(temp);
    }
    else
    {
        int pos1,i=1;
        struct node*temp1=head;
        struct node*temp2=head;
        printf("enter the node position to delete\n");
        scanf("%d",&pos1);
        pos1--;
        while(i<pos1)
        {
            temp1=temp1->link;
            i++;
        }
        temp2=temp1->link;
        temp1->link=temp2->link;
        free(temp2);
    }
    printf("node successfully deleted from specified position\n");

}
void main()
{
    int choice=0;
    while(choice!=9)
    {
    	printf("***********************************");
        printf("\nLINKED LIST\n");
        printf("1.create node\n");
      	printf("2.Insertion node at front\n");
        printf("3.Insertion node at end\n");
        printf("4.Insertion node at any position\n");
        printf("5.Deleting node from front\n");
        printf("6.Deleting node from end\n");
        printf("7.Deleting node from any position\n");
          printf("8.display  the list\n");
        printf("9.exit\n");
        printf("Enter the choice you want to workout in linked list \n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            createnode();
            break;
        case 2:
           insertionnodefront();
            break;
        case 3:
            insertionnodeend();
            break;
        case 4:
             insertionnodeany();
            break;
        case 5:
            deletionnodefront();
            break;
        case 6:
           deletionnodeend();
            break;
        case 7:
             deletionnodeany();
            break;
        case 8:
            display();
            break;
        case 9:
            printf("Exited Successfully ");;
            break;
        default:
            printf("invalid choice...\n");
        }
    }
}







