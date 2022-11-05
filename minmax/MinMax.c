#include <stdio.h>

struct MinMax
{
    int min;
    int max;
};

struct MinMax get_min_max(int arr[], int length)
{
    struct MinMax pair;

    if (length == 1)
    {
        pair.max = arr[0];
        pair.min = arr[1];
        return pair;
    }

    if (arr[0] < arr[1])
    {
        pair.min = arr[0];
        pair.max = arr[1];
    }
    else
    {
        pair.min = arr[1];
        pair.max = arr[0];
    }

    for (int i = 2; i < length; i++)
    {
        if (arr[i] < pair.min)
        {
            pair.min = arr[i];
        }
        if (arr[i] > pair.max)
        {
            pair.max = arr[i];
        }
    }

    return pair;
}

void main()
{
    int li[5] = {1, 2, 5, 43, 0};
    struct MinMax res = get_min_max(li, 5);
    printf("min = %d", res.min);
    printf("max = %d", res.max);
}