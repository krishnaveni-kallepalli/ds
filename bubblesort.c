// Write C program to sort a given list of integers in ascending order using Bubble sort.

#include<stdio.h>
void bubblesort(int [],int); 
void main()
{
	int a[20],n,i;
	printf("Enter number of element to array"); 
	scanf("%d",&n);
	printf("\n Enter elements to array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	printf("\n After sorting\n"); 
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
}


void bubblesort(int a[],int n)
{
int i,j,t; 
for(i=0;i<n;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(a[j]>a[j+1])
		{
			t=a[j]; 
			a[j]=a[j+1]; 
			a[j+1]=t;
		}
	}
}
}
