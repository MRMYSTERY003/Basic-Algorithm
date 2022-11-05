#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int get_max_sum(int li[], int length)
{
    int maxsum = li[0];
    int cursum = 0;

    for (int i = 0; i < length; i++)
    {
        if (cursum < 0)
        {
            cursum = 0;
        }
        cursum += li[i];
        maxsum = max(cursum, maxsum);
    }

    printf("%d", maxsum);
}

void main()
{
    int li[] = {-1, 2, 3, 4, -6, -5};
    get_max_sum(li, 5);
}
