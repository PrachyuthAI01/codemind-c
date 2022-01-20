#include<stdio.h>
int main()
{
    int n,num,d,c=0;
    scanf("%d",&n);
    num=n;
    while(num)//12
    {
        d=num%10;//2 1
        c+=d;//2+1
        num=num/10;//1 0
    }
    
    if(n%c==0)
    {
        printf("True");
        
    }
    else
    {
        printf("False");
    }
}