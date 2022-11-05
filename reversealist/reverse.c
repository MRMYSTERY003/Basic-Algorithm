#include <stdio.h>

void show_arr(int arr[], int len) // simple function to display the array
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

void swap(int *a, int *b) // function that use pointers to swap variables, * -> rep value, & -> rep address
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void rev(int arr[], int len)
{
    int start = 0;
    int end = len - 1;

    while (start < end)
    {
        swap(&arr[start], &arr[end]); // swaping the variables with the swap function
        start++;
        end--;
    }
}

void main()
{
    int li[5] = {1, 23, 4, 56, 5};
    printf("before  reversing : ");
    show_arr(li, 5);
    rev(li, 5);
    printf("\nafter reversing : ");
    show_arr(li, 5);
}
