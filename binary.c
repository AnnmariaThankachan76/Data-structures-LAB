#include<stdio.h>
void main()
{
  int n,x,i,a[20],flag=0,left=0,right,mid=0,t=0;
  t++;
  t++;
  t++;
  printf("enter the value of n");
  t++;
  scanf("%d",&n);
  t++;
   printf("enter the elements in the array");
  t++;
   for(i=0;i<n;i++)
	{
	t++;
	 	scanf("%d",&a[i]);
	}
	t++;
  printf("Enter the number to be searched ");
  t++;
  scanf("%d",&x);
  t++;
 
   right=(n-1);
   t++;
  while(left<=right)
	{ 
	t++;	
	 mid=(left+right)/2;
   	 if(x==a[mid])
   	 	{
   			flag=1;
   			break;
   		}
   	else if(x>a[mid])
   		{ 
   		left=mid+1;
   		continue;
   		}
  	 else if(x<a[mid]) 
  	 	{
  		right=mid-1;
  		continue;
  		}
  	 
        }
        t++;
  	  t++;	
        t++;
      
        if(flag==1) 
		{
			printf("the number is found \n");
		} 
		      
	else
		{
			printf(" the number is not found\n");
		}
		t++;
		t++;
	printf("The space complexity is %d\n",(8*4+(4*n)));
  t++;	
  t++;
  printf("The time complexcity is %d\n",t);
 
}			
  
