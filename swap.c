#include <stdio.h>

void swap_max(int arr[], int l, int n)
{
    int max = a[n];
    int pos = -1;
    for (int i = n + 1; i < l; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            pos = i;
        }
    }
    if (pos != -1)
    {
        a[pos] = a[n];
        a[n] = max;
    }
    return 0;
}

void ssort(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        swap_max(arr, l, i);
    }
    return 0;
}
