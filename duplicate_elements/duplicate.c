#include <stdio.h>

int containsDuplicate(int *nums, int numsSize)
{
    int i, j;
    for (i = 0; i < numsSize; i++)
    {
        for (j = i + 1; j < numsSize; j++)
        {
            if (nums[i] == nums[j])
            {
                return 1;
            }
        }
    }
    return 0;
}

void main()
{
    int li[6] = {1, 2, 3, 4, 5, 1};
    int res = containsDuplicate(li, 6);
    if (res)
    {
        printf("the list have duplicate");
    }
    else
    {
        printf("the list dosent have duplicate");
    }
}
