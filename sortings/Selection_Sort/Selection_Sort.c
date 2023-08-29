/*#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	int min,temp;
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
			    min=a[j];	
			}
		}
		temp=a[i];
		a[i]=min;
		min=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}*/
 #include<stdio.h>
void selection_sort(int*arr,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int mid_ind=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[mid_ind])
			{
				mid_ind=j;
			}
		}
		//swapping
		int temp=arr[i];
		arr[i]=arr[mid_ind];
		arr[mid_ind]=temp;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n];
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	selection_sort(arr,n);
	for(i=0;i<n;i++)  printf("%d ",arr[i]);
}
