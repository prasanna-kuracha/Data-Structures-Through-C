//bubble sorting
#include<stdio.h>
int main()
{
	int n,tem,j,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)  //n=5
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				tem=a[j];
				a[j]=a[j+1];
				a[j+1]=tem;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}	
	
}
//Bubble sort using functions
#include<stdio.h>
int bubble_sort(int *a,int n)
{
	int i,j,tem;
	for(i=0;i<n;i++)
	{
	  for(j=0;j<n-1;j++)
	  {
	  	if(a[j]>a[j+1])
			{
				tem=a[j];
				a[j]=a[j+1];
				a[j+1]=tem;
			}
	   }
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int res=bubble_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}	
}

//Bubble sort using various functions
#include<stdio.h>
void printarray (int *a,int n)---------> to print the numbers in every pass
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}
int bubble_sort(int *a,int n)
{
	int i,j,tem;
	for(i=0;i<n;i++)
	{
		//printf("pass%d\n",i+1);
	  for(j=0;j<n-1;j++)
	  {
	  	if(a[j]>a[j+1])
			{
				tem=a[j];
				a[j]=a[j+1];
				a[j+1]=tem;
			}
			printarray(a,n); //it will evert element change
	   }
	   printtarray(a,n); //it will print pass chnage of elements
	}
	
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int res=bubble_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}	


