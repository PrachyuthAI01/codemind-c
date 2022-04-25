#include<stdio.h>
int main()
{
    int i,n,sum=0,add=0,diff,a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            sum=sum+a[i];
        }
        else if(a[i]%2==0)
        {
            add=add+a[i];
        }
    }
    if(add>sum)
    {
        diff=add-sum;
        printf("%d",diff);
    }
    else
    {
        diff=sum-add;
        printf("%d",diff);
    }
}