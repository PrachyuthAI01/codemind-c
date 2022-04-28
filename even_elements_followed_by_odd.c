#include<stdio.h>
int main()
{
    int i,j,n,k,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d ",a[i]);
        }
        else
        {
            continue;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2)
        {
            printf("%d ",a[i]);
        }
        else
        {
            continue;
        }
    }
}