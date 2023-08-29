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
void merge_sort(int *A,int n)
{
	int i,r,l,m,p;
	for(p=1;p<n;p*=2)
	{
		for(i=0;i<n;i+=2*p)
		{
			l=i;
			//r=l+2*p-1 
			//m=l+p-1,
			r=min(l+2*p-1,n-1); 
			m=min(l+p-1,n-1);
			merge(A,l,m,r);
		}
	}
}
int main()
{
	int n,i,z;
	scanf("%d", &n);
	int A[n]; // A and B are arrays
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	//int m=l+(n-1)/2;
	merge_sort(A,n);
	//merge(A,l,m,n)
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
}
