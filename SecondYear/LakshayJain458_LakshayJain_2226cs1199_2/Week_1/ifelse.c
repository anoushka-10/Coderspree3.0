#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("Greater");
    }
    else if (a < b)
    {
        printf("smaller");
    }
    else
    {
        printf("equal");
    }
    return 0;
}