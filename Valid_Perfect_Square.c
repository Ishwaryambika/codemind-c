#include<stdio.h>
#include<math.h>
int isPerfectSquare(int number)
{
    int iVar;
    float fVar;
    fVar=sqrt((double)number);
    iVar=fVar;
    
    if(iVar==fVar)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(isPerfectSquare(num))
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