#include <stdio.h>

void swap_max(int arr[], int l, int n ){
    int max = arr[n];
    int pos= n+1;
    for (int i=pos; i<l; i++){
        if (arr[i] >arr[max]){
            max = arr[i];
            pos = i;
        }
    }
    int temp=arr[max]
    arr[max] =arr[n];
    arr[n]= temp;
}

void ssort(int arr[], int l)
{
    for (int i = 0; i < l; i++)
    {
        swap_max(a, l, i);
    }

    return 0;
}
