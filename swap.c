#include <stdio.h>

void swap_max(int arr[], int l, int n ){
    int max = arr[n];
    int pos= n;
    for (int i=pos; i<l; i++){
        if (arr[i] >max){
            max = arr[i];
            pos = i;
        }
    }
    arr[pos] =arr[n];
    arr[n]= max;
    return 0;
}

void ssort(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        swap_max(a, l, i);
    }

    return 0;
}
