#include<stdio.h>
int fun(int n)//10
{
    int d,temp,c=0,cc=0;
	temp=n;//10
	while(n)
	{
		d=n%10;//0
		if(d==0)
		{
			return 0;
		}
		if(temp%d==0)
		{
			cc++;
		}
		c++;
		n=n/10;
	}
	if(c==cc)
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
    int n1,n2,a;
    scanf("%d%d",&n1,&n2);
    for(a=n1;a<=n2;a++)//10
    {
        if(fun(a))//10
        {
            printf("%d ",a);
        }
    }
}