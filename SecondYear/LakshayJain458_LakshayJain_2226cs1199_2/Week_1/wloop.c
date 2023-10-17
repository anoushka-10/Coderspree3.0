#include <stdio.h>

int main()
{
    int n, a, evensum = 0, oddsum = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        a = n % 10;
        if (a % 2 == 0)
        {
            evensum = evensum + a;
        }
        else
        {
            oddsum = oddsum + a;
        }
        n = n / 10;
    }
    printf("%d %d", evensum, oddsum);

    return 0;
}