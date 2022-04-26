#include<stdio.h>
int main()
{
    int i,n,a[100],A,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&A);
    for(i=0;i<n;i++)
    {
        if(A==a[i])
        {
            c++;
        }
    }
    printf("%d",c);
}