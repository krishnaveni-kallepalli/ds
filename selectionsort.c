//Write C program to sort a given list of integers in ascending order using Selection sort.

#include<stdio.h>
void selectionsort(int [],int); 
int main()
{
	int a[20],n,i; 
	printf("Enter number of element to array");
	scanf("%d",&n);
	printf("\n Enter elements to array"); 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	selectionsort(a,n); 
	printf("\n After sorting\n"); 
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
}
void selectionsort(int a[],int n)
{
int i,j,pos,t; 
for(i=0;i<n;i++)
{
	pos=i; 
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[pos])
		{
			pos=j;
		}
	}
	t=a[pos]; 
	a[pos]=a[i]; 
	a[i]=t;
}
}
