#include <stdio.h>
#include <stdlib.h>

#define min(a, b) (((a) < (b)) ? (a) : (b))

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int min_diff(int *arr, int len, int m)
{
    qsort(arr, 5, sizeof(int), cmpfunc);

    int min_dif = arr[len - 1] - arr[0];

    for (int i = 0; i < len - m + 1; i++)
    {
        int cur_min = arr[i + m - 1] - arr[i];
        min_dif = min(min_dif, cur_min);
    }

    return min_dif;
}

void disp(int *li, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", li[i]);
    }
    printf("\n");
}

void main()
{
    int arr[5] = {2, 5, 3, 1, 9};
    int len = 5;
    int m = 3;
    int res = min_diff(arr, len, m);
    printf("%d", res);
}