#include<stdio.h>
#define min(a,b) a<b?a:b
void merge(int *A,int l,int m,int r)
{
	int res[r-l+1];
	int i=l,j=m+1,k=0,z;
	while(i<=m && j<=r)
	{
		if(A[i]<=A[j])
		{                        //print a[i] i++
			res[k++]=A[i++];  //k=A[i]  k++ i++
		}
		else
		{
			//printf("%d",B[j]);
			//j++;
			res[k++]=A[j++];
		}
	}
	while(i<=m) res[k++]=A[i++];
    while(j<=r) res[k++]=A[j++];
    k=0;
    for(z=l;z<=r;z++)
    {
    	A[z]=res[k++];
	}
}
void merge_sort_rec(int *A,int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		merge_sort_rec(A,l,m);
		merge_sort_rec(A,m+1,r);
		merge(A,l,m,r);
	}
}
int main()
{
	int n,i,z,r,l;
	scanf("%d", &n);
	int A[n]; // A and B are arrays
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	//int m=l+(n-1)/2;
	merge_sort_rec(A,0,n-1);
	//merge(A,l,m,n)
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
