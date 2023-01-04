#include <stdio.h>
int main()
{
    int year = 0;
    int res = 0;
    scanf("%d", &year);
    res = year % 100;
    printf("%02", res);

    return 0;
}