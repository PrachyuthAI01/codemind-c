#include<stdio.h>
int main()
{
    int i,n,a[100],r=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        while(a[i])
        {
            int d;
            d=a[i]%10;
            r=r*10+d;
            a[i]=a[i]/10;
        }
        printf("%d ",r);
        r=0;
    }
}