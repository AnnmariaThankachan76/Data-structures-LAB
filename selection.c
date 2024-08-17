#include<stdio.h>
void main()
{
	int i,n,j,a[50],temp,t=0;
	t++;
	printf("enter the sixe of the array");
	t++;
	scanf("%d",&n);
	t++;
	printf("enter the elements of the array to be sorted\n ");
	t++;
	for(i=0;i<n;i++)
	{
	t++;
		scanf("%d",&a[i]);
	}
	t++;
	for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
	{
	    		if(a[i]>a[j])
	    		{
	    		temp=a[i];
	    	 	a[i]=a[j];
	    	 	a[j]=temp;	
	    		}
	    		t++;	
	 } 
	 t++;  
	   }
	   t++;
	   t++;			
	printf("The sorted array is\n");
	t++;
	for(i=0;i<+n;i++)
	{
		printf("%d\n",a[i]);
		t++;
	}
	t++;
	printf("the space complexcity is %d",((5*4)+(4*n)));
	printf("the time complexcity is %d",t);
			
}			
