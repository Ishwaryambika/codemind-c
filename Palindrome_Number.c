#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,o,rev=0,r;
        scanf("%d",&a);
        o=a;
        while(o!=0)
        {
            r=o%10;
            o=o/10;
            rev=rev*10+r;
        }
        if(rev==a)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}