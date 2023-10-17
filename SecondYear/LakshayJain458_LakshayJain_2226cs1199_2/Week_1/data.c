#include<stdio.h>
int main()
{
    int intType;
    long longType;
    float floatType;
    double doubleType;
    char characterType;
    printf("int size is %zu byte\n",sizeof(intType));
    printf("long size is %zu byte\n",sizeof(longType));
    printf("float size is %zu byte\n",sizeof(floatType));
    printf("double size is %zu byte\n",sizeof(doubleType));
    printf("char size is %zu byte\n",sizeof(characterType));
    return 0;
}