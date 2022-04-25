// Write C program to sort a given list of integers in ascending order using Insertion sort.

#include<stdio.h>
void insertion(int [],int);
int main()
{
	int a[2],n,i; 
	printf("\n Enter no.of elements to array"); 
	scanf("%d",&n);
	printf("\n Enter elements to array"); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n After sorting");
	insertion(a,n);
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
}


void insertion(int a[],int n)
{
int i,j,x; 
for(i=1;i<n;i++)
{
	x=a[i]; 
	j=i-1;
	while(j>=0 && a[j]>x)
	{
		a[j+1]=a[j]; 
		j=j-1;
	}
	a[j+1]=x;
}
}

