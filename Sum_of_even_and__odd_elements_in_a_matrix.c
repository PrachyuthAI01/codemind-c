#include<stdio.h>
int main()
{
    int i,j,n,a[100][100],m,c=0,d=0;
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
            if(a[i][j]%2==0)
            {
                c=c+a[i][j];
            }
            else
            {
                d=d+a[i][j];
            }
        }
    }
    printf("%d %d",c,d);
}