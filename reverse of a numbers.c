#include <stdio.h>
int main()
{
    int n,d=0,r;
    scanf("%d",&n);
    while (n != 0)
    {
        r=n%10;
        d=d*10+r;
        n /= 10;
    }
    printf("%d",d);
    return 0;
}