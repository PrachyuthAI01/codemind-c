#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n;k++)
        {
            if(k==1||i==n||k==i)
            { 
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("
");
    }
}