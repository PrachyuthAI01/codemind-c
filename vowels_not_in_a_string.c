#include<stdio.h>
int main()
{
    int k,i,l=0,d=0,f=0,c=0,a=0;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        k=str[i]-97;
        if(k==0)
        {
            d++;
        }
        if(k==4)
        {
            f++;
        }
        if(k==8)
        {
            c++;
        }
        if(k==14)
        {
            a++;
        }
        if(k==20)
        {
            l++;
        }
    }
    if(d==0)
    {
        printf("a ");
    }
    if(f==0)
    {
        printf("e ");
    }
    if(c==0)
    {
        printf("i ");
    }
    if(a==0)
    {
        printf("o ");
    }
    if(l==0)
    {
        printf("u ");
    }
    if(l!=0 && a!=0 && d!=0 && f!=0 && c!=0)
    {
        printf("0 ");
    }
}