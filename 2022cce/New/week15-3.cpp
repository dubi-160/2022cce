#include <stdio.h>
int main()
{
    printf("A 的值是%d\n", 'A');
    printf("B 的值是%d\n", 'B');
    printf("C 的值是%d\n", 'C');

    for(int c = 'A'; c<='B'; c++){
        printf("%c的值是 %d\n", c, c);
    }
}
