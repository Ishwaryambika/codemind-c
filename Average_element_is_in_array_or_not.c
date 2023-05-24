#include<stdio.h>
int main()
{
    int n,i,sum,avg,t=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        avg=sum/n;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==avg)
        {
            t=1;
            break;
        }
    }
    if(t==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

