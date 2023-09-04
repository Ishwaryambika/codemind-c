#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<9999999999 and n>100000000)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}