#include<stdio.h>
struct poly
{
int coef;
int ex;
};
void main()
{
int n,i;
printf("Enter the number of terms for the polynomail\n");
scanf("%d",&n);
struct poly x[n];
printf("Enter the elements of the polynomial  i.e\n");
printf("Coefficients and exponents should be in descending order\n");
for(i=0;i<n;i++)
{
	printf("Cofficient:");
	scanf("%d",&x[i].coef);
	printf("\nExponent:");
	scanf("%d",&x[i].ex);
}
printf("The entered elements in polynomial form:\n");
for(i=0;i<n;i++)
{
	printf("%dx^%d",x[i].coef,x[i].ex);
	if ((i<n-1) )
	printf(" + ");
}
}

