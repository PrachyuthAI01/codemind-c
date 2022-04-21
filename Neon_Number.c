#include<stdio.h>
int main()
{
    int p,v,l,r=0;
    scanf("%d",&v);
    p=v*v;
    while(p)
    {
        l=p%10;
        r=r+l;
        p=p/10;
        
    }
    if(r==v)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}