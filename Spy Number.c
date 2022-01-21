#include<stdio.h>
int main()
{
    int n,d,e=1,c=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        c+=d;
        e*=d;
        n=n/10;
        
    }
    if(e==c)
    {
        printf("Spy Number");
        
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}