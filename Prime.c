#include<stdio.h>
int main()
{
    int i,n,flag=0;
    scanf("%d",&n);
    if(n==0 || n==1)
    flag=1;
    for(i=2;i<=2;i++)
    {
        if(n%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
       printf("Prime"); 
    }
    else
    {
        printf("Not Prime");
    }
}