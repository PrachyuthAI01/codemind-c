#include<stdio.h>
int main()
{
    int i,j,n,m,a[100][100],sum=0;
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
            if(i==0||j==0||i==n-1||j==m-1)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
}