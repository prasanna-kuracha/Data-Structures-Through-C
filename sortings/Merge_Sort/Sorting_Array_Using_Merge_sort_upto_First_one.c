#include<stdio.h>
void merge(int *A,int m,int *B,int n)
{
	int res[m+n],i=0,j=0,k=0,z;
	while(i<m && j<n)
	{
		if(A[i]<B[j])
		{                        //print a[i] i++
			res[k++]=A[i++];  //k=A[i]  k++ i++
		}
		else
		{
			//printf("%d",B[j]);
			//j++;
			res[k++]=B[j++];
		}
	}
	while(i<m) 	res[k++]=A[i++];
    while(j<n)  res[k++]=B[j++];
    for(z=0;z<m+n;z++)
    {
    	printf("%d",res[z]);
	}
}
int main()
{
	int m,n,i;
	scanf("%d %d",&m, &n);
	int A[m],B[n]; // A and B are arrays
	for(i=0;i<m;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&B[i]);
	}
	merge(A,m,B,n);
}
