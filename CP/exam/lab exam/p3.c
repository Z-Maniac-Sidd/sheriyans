#include<stdio.h>

void swap(int arr[], int a, int b){
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void  bubblesort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        /* code */
        for (int j = 0; j < n-i-1; j++)
        {
            /* code */
            if (arr[j]>arr[j+1])
            {
                /* code */
                swap(arr, j, j+1);
            }
        }
    }
}

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    for (int i = 0; i < n-1; i++)
    {
        /* code */
        for (int j = 0; j < n-i-1; j++)
        {
            /* code */
            if (arr[j]>arr[j+1])
            {
                /* code */
                swap(arr, j, j+1);
            }
        }
    count++;
    }
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n %d", count);
}