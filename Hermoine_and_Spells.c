#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        if(b>c)
        {
            printf("%d",a+b);
        }
        else
        {
            printf("%d",a+c);
        }
    }
    else if(b>c && b>a)
    {
        if(c>a)
        {
            printf("%d",b+c);
        }
        else
        {
            printf("%d",b+a);
        }
    }
    else
    {
        if(a>b)
        {
            printf("%d",a+c);
        }
        else
        {
            printf("%d",b+c);
        }
    }
}