#include<stdio.h>
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
    for(z=l;z<=r;z++)
    {
    	printf("%d  ",res[z]);
	}
}
int main()
{
	int n,i,l;
	scanf("%d", &n);
	int A[n]; // A and B are arrays
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int m=l+(n-1)/2;
	merge(A,0,m,n-1);
}

//merging the array in same array without taking resultant array
/*#include<stdio.h>
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
    for(z=l;z<=r;z++)
    {
    	A[z]=res[z];
	}
}
int main()
{
	int n,i;
	scanf("%d", &n);
	int A[n]; // A and B are arrays
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	//mid = (0+(n-1))/2
	merge(A,0,2,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d  ",A[i]);
	}
	
}*/
#include<stdio.h>
void merge(int *a,int l,int m,int r)
{
	int res[r-l+1]
	int i=l,j=m+1,k=0
	while(i<=m & j<=r)
	{
		if(a[i]<=a[j])
		{
			res[k++]=a[i++]
		}
		else
		{
			res[k++]=a[j++];
		}
	}
	
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	m=l+(n-1)/2;
	merge(a,0,m,n-1);
	
}
