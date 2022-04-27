#include<stdio.h>
int main()
{
    int i,n,a[100],r=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int k,t;
        k=a[i];
        t=k;
        while(k)
        {
            int d;
            d=k%10;
            r=r*10+d;
            k=k/10;
        }
        if(t==r)
        {
            c++;
        }
        k=0;
        r=0;
    }
    printf("%d",c);
}