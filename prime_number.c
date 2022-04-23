#include<stdio.h>
int main()
{
    int p,v,s=0;
    scanf("%d",&v);
    for(p=2;p<=v/2;++p)
    {
        if(v%p==0)
        {
            s=1;
            break;
        }
    }
    if(s==0)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
}