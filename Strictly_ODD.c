#include<stdio.h>
int main()
{
    int a[100],i,n,c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2)
        {
            c++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2 && i%2)
        {
            d++;
        }
    }
    if(c==d)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}