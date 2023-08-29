#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// viewing the array
void peek(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// function to perform insertion sort (performs sorting inplace)
void insertion_sort(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main () {
    int arr[5] = {5, 4, 3, 2, 1};
    printf("Before sorting\n");
    peek(arr, 5);
    // function call
    insertion_sort(arr, 5);
    printf("After sorting\n");
    peek(arr, 5);
}

//insertion sort by intern
#include<stdio.h>
int insertion (int *a,int n)
{
	int j,i;
	for(i=1;i<n;i++)
	{
		int key=a[i];
		for(j=i-1;j>=0;j--)
		{
			if(a[j] > key) 
			{
				a[j+1]=a[j];
			}
			else
			{
				break;
			}	
		}
		a[j+1]=key;
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
	int c=insertion(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

//insertion sort by sir
#include<stdio.h>
int insertion (int *a,int n)
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
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int c=insertion(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

