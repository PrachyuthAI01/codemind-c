#include<stdio.h>
#include<math.h>
int main()
{
    int i,x,n,avg=0,a[100],N,t,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        avg=avg+a[i];
    }
    x=avg/n;
    N=floor(x);
    for(i=0;i<n;i++)
    {
        if(N>=a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}