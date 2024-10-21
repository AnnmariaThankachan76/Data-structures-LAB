#include<stdio.h>
#include<stdlib.h>
int tree[20];
void main(){

int n,i,pos,parent,LC,RC;
printf("Enter the number of nodes");
scanf("%d",&n);
printf("enter the nodes");
for(i=0;i<n;i++){
	scanf("%d",&tree[i]);
}
printf("The entered values of binary tree are ");
for(i=0;i<n;i++){
	printf("%d ",tree[i]);
}
printf("\n");
printf("Enter the position(index) you want to check");
scanf("%d",&pos);
if(pos>n){
printf("INVALID CHOICE");
exit(0);
}
 parent=((pos-1)/2);
 LC=((2*pos)+1);
 RC=((2*pos)+2);
if (parent!=0)
{
printf("The parent node of  %d is %d \n",tree[pos] ,tree[parent]);
}
if(parent<=0){
printf("NO parent \n ");
}
if( LC<n){
printf("the left child of %d is %d \n",tree[pos],tree[LC]);
}
else{
printf("NO LEFT CHILD\n");
}
if( RC<n){
printf("the right child of %d is %d \n ",tree[pos],tree[RC]);
}
else{
printf("NO RIGHT CHILD \n");
}
}
