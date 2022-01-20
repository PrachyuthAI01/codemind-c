#include<stdio.h>
int main()
{
    int d,num,l=0;
    scanf("%d",&num);
    while(num!=0)
    {
        d=num%10;//456
        if(l<d)
        {
        	l=d;
		}
        num=num/10;
    }
    printf("%d",l);
}