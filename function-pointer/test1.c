#include <stdio.h>

int add(int a,int b)
{
    return a+b;
}

void main()
{
    int (*pfun)(int,int);//声明一个函数指针
    pfun=add;
    printf("%d\n",pfun(3,7));
}
