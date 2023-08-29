#include<stdio.h>
int binary_search_rec(int *a,int n,int se,int l,int h)
{
	if(l>h)  return -2;
	else
	{
	 int mid=(l+h)/2;
	 if(se==a[mid])
	 return mid;
	 else if(se>a[mid])
	    binary_search_rec(a,n,se,mid+1,h);
	else if(se>a[mid])
	    binary_search_rec(a,n,se,l,mid-1);
	    
	}
	
	
}
int main()
{
	int n,se,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&se);
	int res=binary_search_rec(a,n,se,0,n-1);
	if(res==-2)
	{
		printf("Not found");
	}
	else
	{
		printf("found at  %d index",res);
	}
}
