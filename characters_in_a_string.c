#include<stdio.h>
int main()
{
    int i,c=0;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=0;i++)
    {
        c++;
    }
    printf("%d",c);
}