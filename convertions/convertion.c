#include <stdio.h>
#include <math.h>
void dec_to_bin(int num)
{
    int temp[32], i = 0;

    while (num > 0)
    {
        temp[i] = num % 2;
        num /= 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", temp[j]);
    }
}

int bin_to_res(int num)
{
    int res = 0, unit;
    int i = 0;
    while (num > 0)
    {
        unit = num % 10;
        res += unit * pow(2, i);
        num /= 10;
        i++;
    }

    return res;
}

void main()
{

    int res = bin_to_res(101);
    printf("%d", res);
}
