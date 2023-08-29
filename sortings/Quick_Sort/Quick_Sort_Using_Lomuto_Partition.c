#include<stdio.h>
int lamuto_partition(int *a,int l,int r)
{
	int pivot=a[r];
	int i=l-1;
	int j=l;
	for(;j<r;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	int t=a[r];
	a[r]=a[i+1];
	a[i+1]=t;
	return i+1;
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,l=0,r=n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int c=lamuto_partition(a,l,r);
	//for(i=0;i<n;i++)
	 printf("%d ",c);
}

/*#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int lomuto_partition(int *a,int l,int r)
{
	int pivot=a[r];
	int i=l-1;
	int j=l;
	for(;j<r;j++)
	{
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[r],&a[i+1]);
	return i+1;
}
void quick_sort(int *a, int l,int r)
{
	if(r>l)
	{
		int p=lomuto_partition(a,l,r);
		quick_sort(a,l,p-1);
		quick_sort(a,p+1,r);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,l=0,r=n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick_sort(a,l,r);
	for(i=0;i<n;i++) printf("%d ",a[i]);
}*/
