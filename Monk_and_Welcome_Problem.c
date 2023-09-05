#include<stdio.h>
int main()
{
    int n,a[100],i,b[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=a[i]+b[i];
        printf("%d ",sum);
        sum=0;
    }
}