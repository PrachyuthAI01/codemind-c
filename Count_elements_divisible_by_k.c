#include<stdio.h>
int main()
{
    int i,n,a[100],c=0,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%k==0)
        {
            c++;
        }
    }
    printf("%d",c);
}