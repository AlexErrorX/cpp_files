#include<stdio.h>
#include<iostream>
int f(int n)/*递归函数*/
{
    int fac;
    if (n < 0)
        printf("n<0,data error!");
    else
        if (n == 0 || n == 1)
            fac = 1;
        else
            fac = f(n - 1) * n;
    return fac;
}
int main()
{
    int n, y;
    printf("请输入一个整数：\n");
    scanf("%d", &n);
    y = f(n);
    printf("%d!=%d", n, y);
    return 0;
}
