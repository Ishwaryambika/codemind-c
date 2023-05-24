#include<stdio.h>
int main()
{
    int n,key,i,t=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
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