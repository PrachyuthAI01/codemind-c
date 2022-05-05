#include<stdio.h>
int main()
{
    int i,n,a[100],x,c=0;
    float avg,s=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(x=1;x<=a[i];x++)
        {
            if(a[i]%x==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            d++;
            s=s+a[i];
        }
    }
    avg=s/d;
    printf("%.2f",avg);
}