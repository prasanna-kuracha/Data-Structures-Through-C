#include<stdio.h>
void insertion(char *a,int n)
{
	int j,i;
	for(i=1;i<n;i++)
	{
		int key=a[i];
		for(j=i-1;;j--)  //here we doesn't give any  condition ,it means j value takes upto any number like 0,-1,-2...
		{
			if(a[j] < key || j==-1) 
			{
				a[j+1]=key;
				break;
			}
			else
			{
				a[j+1]=a[j];
			}
		}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	char a[50];
    scanf("%s",&a);
	insertion(a,n);
	printf("%s",a);
}

