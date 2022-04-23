#include<stdio.h>
int main()
{
    int t,p,v,r,l=0,fc=0,f=0,d,x;
    scanf("%d",&p);
    t=p;
    while(p)
    {
        r=p%10;
        l=l*10+r;
        p=p/10;
    }
    d=l;
    for(v=1;v<=t;v++)
    {
        if(t%v==0)
        {
            fc++;
        }
    }
    for(x=1;x<=d;x++)
    {
        if(d%x==0)
        {
            f++;
        }
    }
    if(fc==2)
    {

        if(fc==2 && f==2)
        {
            printf("circular prime");
        }
        else
        {
            printf("prime but not a circular prime");
        }
    }
    else
    {
        printf("not prime");
    }
}