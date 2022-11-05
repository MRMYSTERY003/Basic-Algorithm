#include <stdio.h>

void convert(int num)
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

void main()
{
    convert(8);
}
