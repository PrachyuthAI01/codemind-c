#include<stdio.h>
int main()
{
    int sqr,rem,sum=0,n;
    scanf("%d",&n);
    sqr=n*n;
      while(sqr!=0)//
    {
        rem = sqr%10;
        sum += rem; //sum = sum + res
        sqr /= 10;  //sqr = sqr / 10
    }

    if(sum==n)
    {
        printf("Neon Number");
    }    
    else
    {
        printf("Not Neon Number");
    }

    return 0;
}