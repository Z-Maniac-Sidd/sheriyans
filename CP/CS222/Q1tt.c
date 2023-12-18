// // write a program to count the number of times, the loop executes for bubble sort
// #include<stdio.h>
// int main(){
//     int size;
//     int check = 0;
//     printf("Enter size: ");
//     scanf("%d", &size);
//     printf("Enter array: ");
//     int arr[size];
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     int a;
//     // a = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[i]<arr[j])
//                 {
//                     int b = arr[i];    
//                     arr[i] = arr[j];
//                     arr[j] = b;
//                     check++;
//                 }
//         }
        
//     }
//     printf("Sorted array: ");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     printf("Number of times loop runs: %d", check);
// }

#include<stdio.h>
int main(){
    int i, j, size, temp, check = 0, check1 = 0, key;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 1; i < size; i++)
    {
        key =arr[i];
        j = i-1;
        check++;

        while (j>=0 && arr[j]>key)
        {
            
            check1++;
            arr[j+1] = arr[j];
            j = j-1;

        }
        arr[j+1] = key;
    }
    
    printf("Sorted array: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n Number of times loop 1 runs: %d", check);
    printf("\n Number of times loop 2 runs: %d", check1);
}