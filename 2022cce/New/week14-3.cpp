#include <stdio.h>
int a=20;///global ���y ���@�ɳ��ݱo�쪺�Ѥ�
void funcA()
{///�s�_����
    int a=10;
    printf("funcA�̭��La:%d\n", a);
}
void funcB()
{///��饫��
    int a=30;
    printf("funcB�̭��La:%d\n", a);\
}
int main()
{
    printf("�b main()�ݨ쪺a�O:%d\n", a);
    funcA();
    funcB();
    printf("�b main()�ݨ쪺a�O:%d\n", a);
}
