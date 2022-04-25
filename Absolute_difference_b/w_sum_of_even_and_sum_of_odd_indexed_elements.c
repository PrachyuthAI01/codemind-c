#include<stdio.h>
int main()
{
    int i,n,sum=0,a[100],add=0,diff=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+a[i];
        }
        else if(i%2==0)
        {
            add=add+a[i];
        }
    }
    diff=add-sum;
    printf("%d",diff);
}