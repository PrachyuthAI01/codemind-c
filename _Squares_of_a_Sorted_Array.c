#include<stdio.h>
void buso(int n,int *b)
{
    int i,j,l;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                l=b[i];
                b[i]=b[j];
                b[j]=l;
            }
        }
    }
}
int main()
{
    int n,a[100],b[100],i,j,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i]*a[i];
    }
    buso(n,b);
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}