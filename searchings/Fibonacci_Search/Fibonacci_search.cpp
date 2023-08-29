//fibnocci series
#include<stdio.h>
#define min(a,b) a<b?a:b
int fib_search(int *ar,int n,int se)
{
    int a=0,b=1,c=1;
    while(c<n) //6 1<5 3<5 5<6 8<6
    {
    // c=2;
        a=b; //a=3;
        b=c;//b=5;
        c=a+b;//c=8
    }
    int offset=-1;
    while(c>1) //c>0 ,c>-1
    {
        int index=min(offset+a,n-1);
        if(se==ar[index]) return index;
        else if(se>ar[index])
        {
            offset=index;
            c=b;//c=5
            b=a;//b=3
            a=c-b;//a=2
        }
        else
        {
            c=a;
            b=b-a;
            a=c-b;
        }
        //if( b && ar[offset+1]==se)//3 
        //{
            //return offset+1;
        //}
    }
return -1;
}
int main()
{
    int n,se,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++) scanf("%d",&ar[i]);
    scanf("%d",&se);
    int res=fib_search(ar,n,se);
    if(res==-1)
    {
        printf("element is not found");
    }
    else
    {
        printf("element is found at index %d",res);
    }
}
