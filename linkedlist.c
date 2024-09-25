#include<stdio.h>
#include<stdlib.h>

int main()
{
    struct node {
        int data;
        struct node *next;
    };

struct node *head, *newnode, *temp;
head = 0;
int choice = 1, count = 0;
while (choice != 0) {
  newnode = (struct node *)malloc(sizeof(struct node));
  printf("Enter the data: ");
  scanf("%d", &newnode->data);
  newnode->next = 0;
	if (head == 0) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }

printf("Do you want to continue(0 to stop,1 to continue)?");
  scanf("%d", &choice);
   }
   printf("The data in the linked list entered are:");
   temp = head;
   while (temp != 0) {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }

    printf("\nThe number of nodes = %d\n", count);

    return 0;
}

 
