#include<stdio.h>
int main()
{
    int i,n,a[100],P=0,V=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            P++;
        }
        if(a[i]%2==0 && i%2==0)
        {
            V++;
        }
    }
    if(P==V)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}