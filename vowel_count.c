#include<stdio.h>
int main()
{
    int i,c=0;
    char str[100];
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85)
        {
            c++;
        }
    }
    printf("%d",c);
}