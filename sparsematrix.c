#include<stdio.h>
void main()
{
  int r,c,i,j,a[20][20],count1=0,count2=0,b[20][20];
  	printf("Enter the values of rows and columns of the matrix\n");
 	 printf("Enter the value rows\n");
  	scanf("%d",&r);
  	printf("Enter the value column\n");
  	scanf("%d",&c);
  	printf("Enter the elements of the array\n");
  	for(i=0;i<r;i++)
  	{
  		for(j=0;j<c;j++)
  		{
  		  scanf("%d",&a[i][j]);
  		 }
  	}
  	for(i=0;i<r;i++)
  	{
  		for(j=0;j<c;j++)
  		{
  			if(a[i][j]==0)
  			     count1++;
  			else
  			    count2++;
  		}
  	}
  	if(count1>count2)
  	{
  		printf("Yes,it is a sparse matrix\n");
  		printf("Row\tColumn\tValue\n");
  		b[0][0]=r;
  		b[0][1]=c;
  		b[0][2]=count2;
  		printf("%d\t%d\t%d\n",b[0][0],b[0][1],b[0][2]);
  		int k=1;
  		for(i=0;i<r;i++)
  		{
  			for(j=0;j<c;j++)
  			{
  				if(a[i][j]!=0)
  				{
  					b[k][0]=i;
  					b[k][1]=j;
  					b[k][2]=a[i][j];
  					printf("%d\t%d\t%d\n",b[k][0],b[k][1],b[k][2]);
  					k++;
  				}
  			}
  		}
  	}
  	else
  	{
  		printf("It is not a sparse matrix");
 	 }
  
  }				
  		
  		
  		
  	
  		  
  	
