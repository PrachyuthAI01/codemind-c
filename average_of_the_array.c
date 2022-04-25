#include<stdio.h>
int main()
{
    int i,n,k,a[100];
    float t,sum=0.0;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    t=sum/n;
    printf("%.2f",t);
}