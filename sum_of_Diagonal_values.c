#include<stdio.h>
int main()
{
    int i,n,m,j,a[100][100],c=0,sum=0,d;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if(i==j || i+j==n-1)
           {
               sum=sum+a[i][j];
           }
        }
    }
    
    printf("%d",sum);
    
}