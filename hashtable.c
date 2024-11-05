#include<stdio.h>
#include<stdlib.h>
struct hash{
	int key;
	int data;
};
struct hash a[10];
int size=10;
void insert (int,int);
void delete(int);
void display();
int main(){
 int choice,key,data,i;
 for(i=0;i<size;i++){
 	a[i].key=-1;
 	a[i].data=-1;
 }
 do{
 printf("\n Enter the operation to do inhash table");
 printf("\n1.Insert item");
 printf("\n2.Delete item");
 printf("\n3.Display hashtable");
 printf("\n4.Exit");
 printf("\nEnter your choice");
 scanf("%d",&choice);
 switch(choice){
 case 1: 
 	printf("Enter the key");
 	scanf("%d",&key);
 	printf("Enter the data");
 	scanf("%d",&data);
 	 insert(key,data);
 	break;
 case 2:
 	printf("enter the key to delete");
 	scanf("%d",&key);
 	delete(key);
 	break;
 case 3:
 	display();
 	break;
 default:
 	printf("Invalid choice");
 	break;
 	}
} while(choice!=4);

   }

void insert(int key,int data){
	int index=key % size;
	if(a[index].data==-1){
	a[index].key=key;
	a[index].data=data;
	}
	else{
	printf("Collision occured");
	}
}
void delete(int key){
int index=key%size;
if(a[index].data==-1){
	printf("This key does not exist with data");
	}
else{
	a[index].key=-1;
	a[index].data=-1;
	}
}
void display(){
int i;
for(i=0;i<size;i++){
	if(a[i].data==-1)
		printf("\na[%d]:/",i);
	else
		printf("\na[%d]: (%d,%d)",i,a[i].key,a[i].data);
	}
}




