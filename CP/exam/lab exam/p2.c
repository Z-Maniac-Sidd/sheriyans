#include<stdio.h>

void insertsort(int arr[], int n){
    int i, key, j, count1=0, count2=0;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
    
        while (j>= 0 && arr[j]>key)
        {
            /* code */
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

    }
    count1++;
    
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int i, key, j, count1=0, count2=0;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
    
        while (j>= 0 && arr[j]>key)
        {
            /* code */
            arr[j+1] = arr[j];
            j--;
            count2++;
        }
        arr[j+1] = key;
        count1++;
    }
    

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    printf("\n %d", count1 );
    printf("\n %d", count2 );

    return 0;
}