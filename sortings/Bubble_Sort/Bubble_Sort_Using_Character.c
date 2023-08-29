#include<stdio.h>
void bubble_sort(char *a,int n)
{
	int i,j,tem;
	for(i=0;i<n;i++)
	{
		printf("\npass:%d",i+1);
	  for(j=0;j<n-1;j++)
	  {
	  	if(a[j]>a[j+1])
			{
				tem=a[j];
				a[j]=a[j+1];
				a[j+1]=tem;
			}
	   }
	   printf("%s\n",a);
	}
	
}
int main()
{
	int n,i;
	scanf("%d",&n);
	char a[n];
    scanf("%s",&a);
	bubble_sort(a,n);
//	for(i=0;i<n;i++)
//	{
//		printf("%c",a[i]);
//	}
	printf("%s",a);
	
}
	
