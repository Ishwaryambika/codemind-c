#include<stdio.h>
int main()
{
    int cp,sp,pt;
    scanf("%d%d",&cp,&sp);
    if(sp>cp)
    {
        pt=sp-cp;
        printf("Profit");
    }
    else if(cp>sp)
    {
        pt=cp-sp;
        printf("Loss");
    }
    else
    {
        printf("No Profit or No Loss");
    }
}