#include<stdio.h>
int main()
{
    int i,n,a[100],r,sum=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int k;
        k=a[i];
        while(k)
        {
            int d;
            d=k%10;
            sum=sum+d;
            k=k/10;
        }
        c+=sum;
        sum=0;
    }
    printf("%d",c);
}