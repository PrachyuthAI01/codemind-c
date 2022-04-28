#include<stdio.h>
int main()
{
    int i,n,a[100],k=0,p,v;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&p,&v);
    for(i=0;i<n;i++)
    {
        if(a[i]>=p && a[i]<=v)
        {
            continue;
        }
        else
        {
            k=k+a[i];
        }
    }
    printf("%d",k);
}