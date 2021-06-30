#include <stdio.h>

int swap_max(int arr[], int l, int n ){
    int max = arr[0];
    int pos= n;
    for (int i=0; i<l; i++){
        if arr[i] >arr[max]{
            max = arr[i];
            pos = i;
        }
    }
    arr[max] =arr[n];
    arr[max = arr[n]];
}
