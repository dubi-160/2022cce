#include <stdio.h>
int sum(int a, int b);///���ŧi declare
///�b�Τ��e�A�n���ŧi�Ωw�q
int main()
{
    int ans = sum(2,3);///�ϥ� �I�s
    printf("ans: %d\n", ans);
}
int sum( int a, int b)///�w�q
{
    return a + b;
}///�^�� �^�ФH�a
