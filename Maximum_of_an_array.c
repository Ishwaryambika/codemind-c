#include<stdio.h>
int main()
{
    int n,i,sum=0,max,length;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    length=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<length;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}