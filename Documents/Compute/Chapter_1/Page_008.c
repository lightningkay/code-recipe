/*************************************************************************
 > File Name: Page_8.c
 > Author: 
 > Mail: 
 > Created Time: 2016年02月25日 星期四 20时27分03秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a, b, t;
    scanf("%d%d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("%d %d", a, b);
    return 0;
}
