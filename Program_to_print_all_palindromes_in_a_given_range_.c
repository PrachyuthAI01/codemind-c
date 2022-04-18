#include<stdio.h>
int isitpal(int num)
{
    int d,rev=0,t;
    t=num;
    while(num)
    {
        d=num%10;
        rev=rev*10+d;
        num=num/10;
    }
    if(rev==t)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i,n,m,j,d;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(isitpal(i))
        {
            printf("%d ",i);
        }
    }
}