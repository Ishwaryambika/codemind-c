#include<stdio.h>
int main()
{
    int sec,hh,mm,ss;
    scanf("%d",&sec);
    hh=sec/3600;
    mm=(sec-hh*3600)/60;
    ss=sec-hh*3600-mm*60;
    printf("H:M:S-%d:%d:%d",hh,mm,ss);
}