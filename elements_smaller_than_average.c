#include<stdio.h>
int main()
{
    int x,i,n,a[100],avg=0,c=0,N;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        avg=avg+a[i];
    }
    N=avg/n;
    for(i=0;i<n;i++)
    {
        if(N>=a[i])
        {
            c++;
        }
    }
    printf("%d",c);
    
    
}