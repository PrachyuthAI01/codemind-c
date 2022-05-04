#include<stdio.h>
int main()
{
    int i,c=0,x,m,d=0;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        c=0;
        for(x=1;x<=i;x++)
        {
            if(i%x==0)
            {
                c++;
            }
        }
            if(c==9)
            {
                d+=1;
                printf("%d ",i);
                
            }
            
    }
    printf("
Total=%d",d);
}