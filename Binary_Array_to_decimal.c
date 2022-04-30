#include<stdio.h>
#include<math.h>
int main()
{
    int i,a[100],n,sum=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=n;
    for(i=0;i<n;i++)
    {
       if(a[i]==1)
       {
            sum=sum+pow(2,k);
       }
        k--;
    }
    printf("%d",sum/2);
}
