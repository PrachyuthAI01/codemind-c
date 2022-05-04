#include<stdio.h>
int main()
{
    int i,a[100],n,d,c=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        t=a[i];
        if(a[i]==0)
        {
            c++;
        }
        while(a[i])
        {
            d=a[i]%10;
            c++;
            a[i]=a[i]/10;
        }
        printf("%d ",c);
    }
}