#include<stdio.h>
int main()
{
    int num,n,i,d,fc=1,res=0;
    scanf("%d",&n);
    num=n;
    while(num)
    {
        fc=1;
        d=num%10;
        for(i=1;i<=d;i++)
        {
            fc*=i;
        }
        res+=fc;
        num=num/10;
    }
    if(res==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);   
    }
    return 0;
}