#include<stdio.h>  
int main()    
{    
    int n,d,c=0,num;    
    scanf("%d",&n);    
    num=n;    
    while(n>0)    
    {    
        d=n%10;    
        c=(c*10)+d;    
        n=n/10;    
    }    
    if(num==c)  
    {
        printf("True");  
    }
    else        
    {
          printf("False");
    }                    
    return 0;  
}   