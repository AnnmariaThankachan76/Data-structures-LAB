#include<stdio.h>
void main()
{
	int i,n,j,a[50],key,t=0;
	t++;
	printf("enter the size of the array");
	t++;
	scanf("%d",&n);
	t++;
	printf("enter the elemnts of the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		t++;
	}
	t++;
	printf("The original array is\n ");
	t++;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
		t++;
	}
	t++;
	for(i=0;i<n;i++)
	{
	t++;
		key=a[i];
		j=i-1;
		t++;
		t++;
		while((j>=0) && (a[j]>key))
		{
		t++;
			a[j+1]=a[j];
			j--;
			t++;
		}
		a[j+1]=key;
		t++;
	}
		printf("the sorted array is\n ");
		t++;
	for(i=0;i<n;i++)
	{
	t++;
		printf("%d\n",a[i]);
	}
	printf("The space complexity is %d",((5*4)+(n*4)));
	t++;
	t++;
	printf("The time complexity is %d",t);
	}
