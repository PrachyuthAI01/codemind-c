#include<stdio.h>
int main()
{
    int i,j,m,n,a[100][100],sum=0,c=0;
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
            if(i%2==0)
            {
                sum=sum+a[i][j];
            }
            else
            {
                c=c+a[i][j];
            }
        }
    }
    printf("%d %d",sum,c);
}