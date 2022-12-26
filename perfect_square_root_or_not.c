#include<stdio.h>
#include<math.h>
int main()
{
    int num,ivar;
    float fvar;
    scanf("%d",&num);
    fvar=sqrt((double)num);
    ivar=fvar;
    if(ivar==fvar)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}