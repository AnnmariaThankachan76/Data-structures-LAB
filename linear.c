#include<stdio.h>
void main()
{
	int n,i,x,count=0,a[20],t=0;
	t++;
	t++;
	printf("enter the value of n");
	t++;
	scanf("%d",&n);
	t++;
	printf("Enter the number to be searched ");
	t++;
	scanf("%d",&x);
	t++;
	printf("enter the elements in the array");
	t++;
	for(i=0;i<n;i++)
	{
	 	scanf("%d",&a[i]);
	 	t++;
	 }
	 t++;
	  for(i=0;i<n;i++)
		{
			if(a[i]==x)
			{
				count++;
				printf("the element is found at %d position\n",i+1);
				t++;
				t++;
			}
			t++;
		}
		t++;
			
			
			if(count>0) 
			{
				printf("the number is found %d times\n",count);
			        t++;
			        }
			else
			{
				printf(" the number is not found");
				}
			t++;
	printf("the space complexity is %d ",(5*4+(4*n)));
	t++;
	t++;
	printf("the time complexity is %d ",t);
}
	
				
