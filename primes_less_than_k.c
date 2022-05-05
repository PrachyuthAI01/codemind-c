#include<stdio.h>
int main()
{
    int i,n,a[100],x,c=0,k,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
       for(x=1;x<=a[i];x++)
       {
           if(a[i]%x==0)
           {
               c++;
           }
       }
       if(c==2)
       {
          if(a[i]<=k)
          {
              d+=1;
          }
       }
    }
    printf("%d",d);
}







