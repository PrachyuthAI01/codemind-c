#include<stdio.h>
int main()
{
    int i,n,a[100],t,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(t==a[i])
        {
            s=1;
            
        }
    }
    if(s==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}