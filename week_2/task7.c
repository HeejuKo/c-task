#include <stdio.h>

int main(void)
{
    int a, b, c;
    int prize = 0;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        prize = 10000 + a * 1000;
    else if (a == b && b != c)
        prize = 1000 + a * 100;
    else if (a != b && b == c)
        prize = 1000 + b * 100;
    else
    {
        int max = a;
        if (b > max)
            max = b;
        if (c > max)
            max = c;
        prize = max * 100;
    }

    printf("%d\n", prize);
}