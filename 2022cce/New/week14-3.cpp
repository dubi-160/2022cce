#include <stdio.h>
int a=20;///global 全球 全世界都看得到的天王
void funcA()
{///新北市的
    int a=10;
    printf("funcA裡面印a:%d\n", a);
}
void funcB()
{///桃園市的
    int a=30;
    printf("funcB裡面印a:%d\n", a);\
}
int main()
{
    printf("在 main()看到的a是:%d\n", a);
    funcA();
    funcB();
    printf("在 main()看到的a是:%d\n", a);
}
