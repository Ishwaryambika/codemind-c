#include<stdio.h>
int main()
{
   int n=3,c,i,p=1;
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       p=p*a[i];
   }
   c=(2*p*512)/1024;
   printf("%dKB",c);
}